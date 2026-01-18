#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20           
#define HASH_FUNC_COUNT 3 

unsigned char bitArray[SIZE] = {0};

//1st hash func
int hash1(int key) {
    return key % SIZE;
}

//2nd hash func
int hash2(int key) {
    return (key * 7) % SIZE;
}

//3rd hash func
int hash3(int key) {
    return (key * 3 + 1) % SIZE;
}

//insert key into Bloom Filter
void bloomInsert(int key) {
    int h1 = hash1(key);
    int h2 = hash2(key);
    int h3 = hash3(key);

    bitArray[h1] = 1;
    bitArray[h2] = 1;
    bitArray[h3] = 1;

    printf("Inserted %d (hashes: %d, %d, %d)\n", key, h1, h2, h3);
}

// check membership
int bloomCheck(int key) {
    int h1 = hash1(key);
    int h2 = hash2(key);
    int h3 = hash3(key);

    if (bitArray[h1] && bitArray[h2] && bitArray[h3])
        return 1; // possibly present
    else
        return 0; // definitely not present
}

// display bit arrayy
void display() {
    printf("\nBloom Filter Bit Array:\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", bitArray[i]);
    printf("\n\n");
}

int main() {

    int choice, key;

    while (1) {
        printf("\n===== Bloom Filter Menu =====\n");
        printf("1. Insert element\n");
        printf("2. Check membership\n");
        printf("3. Display bit array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                bloomInsert(key);
                break;

            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                if (bloomCheck(key))
                    printf("Key %d is Possibly Present\n", key);
                else
                    printf("Key %d is Definitely Not Present\n", key);
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
