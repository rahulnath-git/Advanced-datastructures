#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_gHj {
    char hash[64];
    struct Node_gHj *left, *right;
} Node_gHj;

Node_gHj* jll_create_leaf(const char* data) {
    Node_gHj *n = (Node_gHj*)malloc(sizeof(Node_gHj));
    snprintf(n->hash, 64, "%s_%d", data, 871);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_gHj *leaf = jll_create_leaf("block_gcIO");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
