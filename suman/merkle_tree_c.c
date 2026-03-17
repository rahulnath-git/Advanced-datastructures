#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_Czx {
    char hash[64];
    struct Node_Czx *left, *right;
} Node_Czx;

Node_Czx* zwN_create_leaf(const char* data) {
    Node_Czx *n = (Node_Czx*)malloc(sizeof(Node_Czx));
    snprintf(n->hash, 64, "%s_%d", data, 296);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_Czx *leaf = zwN_create_leaf("block_COQy");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
