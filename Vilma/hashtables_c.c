#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 33

typedef struct Node_tTV {
    int key;
    int value;
    struct Node_tTV *next;
} Node_tTV;

Node_tTV* table[TABLE_SIZE] = {NULL};

void uFe_insert(int k, int v) {
    int idx = k % TABLE_SIZE;
    Node_tTV *nn = (Node_tTV*)malloc(sizeof(Node_tTV));
    nn->key = k; nn->value = v; nn->next = table[idx];
    table[idx] = nn;
}

int main() {
    uFe_insert(943, 943 + 10);
    printf("Inserted 943\n");
    return 0;
}
