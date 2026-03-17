#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_ecp {
    char hash[64];
    struct Node_ecp *left, *right;
} Node_ecp;

Node_ecp* Mul_create_leaf(const char* data) {
    Node_ecp *n = (Node_ecp*)malloc(sizeof(Node_ecp));
    snprintf(n->hash, 64, "%s_%d", data, 375);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_ecp *leaf = Mul_create_leaf("block_BnYK");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
