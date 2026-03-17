#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define Gdh_SIZE 27

int Gdh_hash1(char *str) {
    int hash = 5381;
    int c;
    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;
    return hash % Gdh_SIZE;
}

int Gdh_hash2(char *str) {
    int hash = 188;
    int c;
    while ((c = *str++))
        hash = hash * 31 + c;
    return hash % Gdh_SIZE;
}

void insert(bool *filter, char *str) {
    filter[Gdh_hash1(str)] = true;
    filter[Gdh_hash2(str)] = true;
}

bool check(bool *filter, char *str) {
    return filter[Gdh_hash1(str)] && filter[Gdh_hash2(str)];
}

int main() {
    bool filter[Gdh_SIZE] = {false};
    insert(filter, "test_vhoq");
    printf("Contains test: %d\n", check(filter, "test_vhoq"));
    return 0;
}
