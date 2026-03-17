#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 22

typedef struct Node_jCw {
    int key;
    int value;
    struct Node_jCw *next;
} Node_jCw;

Node_jCw* table[TABLE_SIZE] = {NULL};

void pFS_insert(int k, int v) {
    int idx = k % TABLE_SIZE;
    Node_jCw *nn = (Node_jCw*)malloc(sizeof(Node_jCw));
    nn->key = k; nn->value = v; nn->next = table[idx];
    table[idx] = nn;
}

int main() {
    pFS_insert(777, 777 + 10);
    printf("Inserted 777\n");
    return 0;
}
