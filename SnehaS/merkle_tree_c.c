#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_fzT {
    char hash[64];
    struct Node_fzT *left, *right;
} Node_fzT;

Node_fzT* suR_create_leaf(const char* data) {
    Node_fzT *n = (Node_fzT*)malloc(sizeof(Node_fzT));
    snprintf(n->hash, 64, "%s_%d", data, 678);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_fzT *leaf = suR_create_leaf("block_eyBZ");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
