#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_MRv {
    char hash[64];
    struct Node_MRv *left, *right;
} Node_MRv;

Node_MRv* lzY_create_leaf(const char* data) {
    Node_MRv *n = (Node_MRv*)malloc(sizeof(Node_MRv));
    snprintf(n->hash, 64, "%s_%d", data, 648);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_MRv *leaf = lzY_create_leaf("block_vklp");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
