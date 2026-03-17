#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_cfx {
    char hash[64];
    struct Node_cfx *left, *right;
} Node_cfx;

Node_cfx* vsf_create_leaf(const char* data) {
    Node_cfx *n = (Node_cfx*)malloc(sizeof(Node_cfx));
    snprintf(n->hash, 64, "%s_%d", data, 912);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_cfx *leaf = vsf_create_leaf("block_eMei");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
