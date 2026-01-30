#include <stdio.h>
#include <string.h>

int a[10] = {0,0,0,0,0,0,0,0,0,0};

int main() {
    int choice;
    char word[20];
    int h1, h2;

    while(1) {
        printf("\n1.Add 2.Check 3.Exit: ");
        scanf("%d", &choice);

        if(choice == 3) break;

        printf("Enter word: ");
        scanf("%s", word);
        h1 = strlen(word) % 10;
        h2 = word[0] % 10;
        if(choice == 1) {
            a[h1] = 1;
            a[h2] = 1;
            printf("Word added to filter.\n");
        } 
        else if(choice == 2) {
            if(a[h1] == 1 && a[h2] == 1) {
                printf("Result: Maybe yes.\n");
            } else {
                printf("Result: Definitely no.\n");
            }
        }
    }
    return 0;
}