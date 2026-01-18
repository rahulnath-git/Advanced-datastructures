/*Implement a simple hash table and demonstrate insertion, searching and deletion in it. 
Use seperate chaining to resolve collisions.*/

#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

struct Node{
    int key;
    int value;
    struct Node *next;
};

struct Node *table[SIZE];

//hash function
int hashFunction(int key){
    return key % SIZE;
}

//insert into hash table
void insert(int key, int value){
    int index = hashFunction(key);

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = table[index];

    table[index] = newNode;

    printf("Inserted (%d, %d) \n", key, value);
}

//Search in hash table
void search(int key){
    int index = hashFunction(key);
    int found = 0;
    struct Node *temp = table[index];

    while(temp != NULL){
        if(temp->key == key){
            printf("Key %d found with value %d\n", key, temp->value);
            found = 1;
        }
        temp = temp->next;
    }

    if(!found){
        printf("Key %d not found :( \n", key);
    }
}

//Deleting
void deleteKey(int key){
    int index = hashFunction(key);

    struct Node *temp = table[index];
    struct Node *prev = NULL;

    while(temp != NULL && temp->key != key){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL){
        printf("Key %d not found for deletion\n", key);
        return;
    }

    if(prev == NULL){
        table[index] = temp->next;
    }else{
        prev->next = temp->next;
    }
    free(temp);
    printf("Key %d deleted sucessfully :D \n",key);
}

//Display 
void display(){
    printf("\n ---Hash Table--- \n");
    
    for(int i=0; i<SIZE; i++){
        struct Node *temp = table[i];

        while(temp){
            printf("(%d, %d) ->", temp->key, temp->value);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

//Main func
int main(){
    //table initialization
    for(int i=0; i<SIZE; i++){
        table[i] = NULL;
    }

    int key, value, choice;
    while (1) {
        printf("\n---- MENU ----\n");
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter key: ");
                scanf("%d", &key);
                printf("Enter value: ");
                scanf("%d", &value);
                insert(key, value);
                break;

            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                search(key);
                break;

            case 3:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                deleteKey(key);
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
