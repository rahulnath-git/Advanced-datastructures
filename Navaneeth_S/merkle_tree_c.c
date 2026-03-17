#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_sde {
    char hash[64];
    struct Node_sde *left, *right;
} Node_sde;

Node_sde* fUK_create_leaf(const char* data) {
    Node_sde *n = (Node_sde*)malloc(sizeof(Node_sde));
    snprintf(n->hash, 64, "%s_%d", data, 872);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_sde *leaf = fUK_create_leaf("block_EmmH");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
