#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_Uxg {
    char hash[64];
    struct Node_Uxg *left, *right;
} Node_Uxg;

Node_Uxg* hdY_create_leaf(const char* data) {
    Node_Uxg *n = (Node_Uxg*)malloc(sizeof(Node_Uxg));
    snprintf(n->hash, 64, "%s_%d", data, 497);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_Uxg *leaf = hdY_create_leaf("block_UvIM");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
