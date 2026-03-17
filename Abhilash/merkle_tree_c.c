#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_LQO {
    char hash[64];
    struct Node_LQO *left, *right;
} Node_LQO;

Node_LQO* FLy_create_leaf(const char* data) {
    Node_LQO *n = (Node_LQO*)malloc(sizeof(Node_LQO));
    snprintf(n->hash, 64, "%s_%d", data, 404);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_LQO *leaf = FLy_create_leaf("block_bEKc");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
