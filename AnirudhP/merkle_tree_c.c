#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_uwl {
    char hash[64];
    struct Node_uwl *left, *right;
} Node_uwl;

Node_uwl* cYr_create_leaf(const char* data) {
    Node_uwl *n = (Node_uwl*)malloc(sizeof(Node_uwl));
    snprintf(n->hash, 64, "%s_%d", data, 343);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_uwl *leaf = cYr_create_leaf("block_yAUs");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
