#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

struct Node {
    char key[50];
    int value;
    struct Node* next;
};

struct Node* hashTable[TABLE_SIZE];

// Hash function
int hashFunction(char* key) {
    int sum = 0;
    for (int i = 0; key[i] != '\0'; i++)
        sum += key[i];
    return sum % TABLE_SIZE;
}

// Insert
void insert(char* key, int value) {
    int index = hashFunction(key);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    strcpy(newNode->key, key);
    newNode->value = value;
    newNode->next = hashTable[index];
    hashTable[index] = newNode;

    printf("Inserted successfully\n");
}

// Search
void search(char* key) {
    int index = hashFunction(key);
    struct Node* temp = hashTable[index];

    while (temp != NULL) {
        if (strcmp(temp->key, key) == 0) {
            printf("Key found, Value = %d\n", temp->value);
            return;
        }
        temp = temp->next;
    }
    printf("Key not found\n");
}

// Delete
void deleteKey(char* key) {
    int index = hashFunction(key);
    struct Node* temp = hashTable[index];
    struct Node* prev = NULL;

    while (temp != NULL) {
        if (strcmp(temp->key, key) == 0) {
            if (prev == NULL)
                hashTable[index] = temp->next;
            else
                prev->next = temp->next;

            free(temp);
            printf("Key deleted successfully\n");
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    printf("Key not found\n");
}

// Display
void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("%d : ", i);
        struct Node* temp = hashTable[i];
        while (temp != NULL) {
            printf("(%s,%d) -> ", temp->key, temp->value);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int choice, value;
    char key[50];

    while (1) {
        printf("\n--- Hash Table Menu ---\n");
        printf("1. Insert\n2. Search\n3. Delete\n4. Display\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter key: ");
                scanf("%s", key);
                printf("Enter value: ");
                scanf("%d", &value);
                insert(key, value);
                break;

            case 2:
                printf("Enter key to search: ");
                scanf("%s", key);
                search(key);
                break;

            case 3:
                printf("Enter key to delete: ");
                scanf("%s", key);
                deleteKey(key);
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
