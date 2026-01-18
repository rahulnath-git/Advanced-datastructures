#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 5

struct Node {
    int data;
    struct Node* next;
};

struct Node* hashTable[TABLE_SIZE];

int hash(int key) {
    return key % TABLE_SIZE;
}

void insert(int key) {
    int index = hash(key);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->next = hashTable[index];

    hashTable[index] = newNode;
}

int search(int key) {
    int index = hash(key);
    struct Node* temp = hashTable[index];

    while (temp != NULL) {
        if (temp->data == key)
            return 1;
        temp = temp->next;
    }
    return 0;
}

void delete(int key) {
    int index = hash(key);
    struct Node* temp = hashTable[index];
    struct Node* prev = NULL;

    while (temp != NULL) {
        if (temp->data == key) {
            if (prev == NULL)
                hashTable[index] = temp->next;
            else
                prev->next = temp->next;

            free(temp);
            printf("%d deleted\n", key);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    printf("%d not found\n", key);
}

void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d: ", i);
        struct Node* temp = hashTable[i];
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {

    for (int i = 0; i < TABLE_SIZE; i++)
        hashTable[i] = NULL;

    insert(10);
    insert(15);
    insert(20);
    insert(7);
    insert(12);

    printf("Hash Table after insertion:\n");
    display();
    
    printf("\nSearch 15: %s\n", search(15) ? "Found" : "Not Found");
    printf("Search 99: %s\n", search(99) ? "Found" : "Not Found");

    delete(15);
    delete(99);

    printf("\nHash Table after deletion:\n");
    display();

    return 0;
}

