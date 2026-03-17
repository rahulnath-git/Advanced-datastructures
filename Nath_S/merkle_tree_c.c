#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_pik {
    char hash[64];
    struct Node_pik *left, *right;
} Node_pik;

Node_pik* IQi_create_leaf(const char* data) {
    Node_pik *n = (Node_pik*)malloc(sizeof(Node_pik));
    snprintf(n->hash, 64, "%s_%d", data, 145);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_pik *leaf = IQi_create_leaf("block_CrxV");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
