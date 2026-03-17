#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 84

typedef struct Node_CfP {
    int key;
    int value;
    struct Node_CfP *next;
} Node_CfP;

Node_CfP* table[TABLE_SIZE] = {NULL};

void Woq_insert(int k, int v) {
    int idx = k % TABLE_SIZE;
    Node_CfP *nn = (Node_CfP*)malloc(sizeof(Node_CfP));
    nn->key = k; nn->value = v; nn->next = table[idx];
    table[idx] = nn;
}

int main() {
    Woq_insert(223, 223 + 10);
    printf("Inserted 223\n");
    return 0;
}
