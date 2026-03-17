#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_zDB {
    char hash[64];
    struct Node_zDB *left, *right;
} Node_zDB;

Node_zDB* qnP_create_leaf(const char* data) {
    Node_zDB *n = (Node_zDB*)malloc(sizeof(Node_zDB));
    snprintf(n->hash, 64, "%s_%d", data, 160);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_zDB *leaf = qnP_create_leaf("block_Dkqo");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
