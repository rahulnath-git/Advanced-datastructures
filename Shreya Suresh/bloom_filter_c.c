#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define wSD_SIZE 25

int wSD_hash1(char *str) {
    int hash = 5381;
    int c;
    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;
    return hash % wSD_SIZE;
}

int wSD_hash2(char *str) {
    int hash = 531;
    int c;
    while ((c = *str++))
        hash = hash * 31 + c;
    return hash % wSD_SIZE;
}

void insert(bool *filter, char *str) {
    filter[wSD_hash1(str)] = true;
    filter[wSD_hash2(str)] = true;
}

bool check(bool *filter, char *str) {
    return filter[wSD_hash1(str)] && filter[wSD_hash2(str)];
}

int main() {
    bool filter[wSD_SIZE] = {false};
    insert(filter, "test_nYHv");
    printf("Contains test: %d\n", check(filter, "test_nYHv"));
    return 0;
}
