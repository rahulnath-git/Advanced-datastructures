#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_RFg {
    char hash[64];
    struct Node_RFg *left, *right;
} Node_RFg;

Node_RFg* gLQ_create_leaf(const char* data) {
    Node_RFg *n = (Node_RFg*)malloc(sizeof(Node_RFg));
    snprintf(n->hash, 64, "%s_%d", data, 151);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_RFg *leaf = gLQ_create_leaf("block_Icxo");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
