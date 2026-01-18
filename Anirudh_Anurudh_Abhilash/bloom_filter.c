#include <stdio.h>
#include <string.h>

#define SIZE 50

int bloom[SIZE];

// Hash functions
int hash1(char* str) {
    int hash = 0;
    for (int i = 0; str[i]; i++)
        hash = (hash + str[i]) % SIZE;
    return hash;
}

int hash2(char* str) {
    int hash = 1;
    for (int i = 0; str[i]; i++)
        hash = (hash * str[i]) % SIZE;
    return hash;
}

int hash3(char* str) {
    int hash = 7;
    for (int i = 0; str[i]; i++)
        hash = (hash + str[i] * i) % SIZE;
    return hash;
}

// Add element
void add(char* item) {
    bloom[hash1(item)] = 1;
    bloom[hash2(item)] = 1;
    bloom[hash3(item)] = 1;
    printf("Item added to Bloom Filter\n");
}

// Check element
void check(char* item) {
    if (bloom[hash1(item)] &&
        bloom[hash2(item)] &&
        bloom[hash3(item)])
        printf("Item MAY be present (Possible False Positive)\n");
    else
        printf("Item is NOT present\n");
}

int main() {
    int choice;
    char item[50];

    while (1) {
        printf("\n--- Bloom Filter Menu ---\n");
        printf("1. Add Item\n2. Check Item\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter item: ");
                scanf("%s", item);
                add(item);
                break;

            case 2:
                printf("Enter item to check: ");
                scanf("%s", item);
                check(item);
                break;

            case 3:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
