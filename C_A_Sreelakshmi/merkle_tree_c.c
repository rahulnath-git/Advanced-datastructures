#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_rgM {
    char hash[64];
    struct Node_rgM *left, *right;
} Node_rgM;

Node_rgM* acy_create_leaf(const char* data) {
    Node_rgM *n = (Node_rgM*)malloc(sizeof(Node_rgM));
    snprintf(n->hash, 64, "%s_%d", data, 664);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_rgM *leaf = acy_create_leaf("block_hwqZ");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
