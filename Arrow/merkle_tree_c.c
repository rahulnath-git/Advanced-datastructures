#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_IJx {
    char hash[64];
    struct Node_IJx *left, *right;
} Node_IJx;

Node_IJx* vNU_create_leaf(const char* data) {
    Node_IJx *n = (Node_IJx*)malloc(sizeof(Node_IJx));
    snprintf(n->hash, 64, "%s_%d", data, 655);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_IJx *leaf = vNU_create_leaf("block_zSrK");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
