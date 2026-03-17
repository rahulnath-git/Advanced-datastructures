#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_DUT {
    char hash[64];
    struct Node_DUT *left, *right;
} Node_DUT;

Node_DUT* JoP_create_leaf(const char* data) {
    Node_DUT *n = (Node_DUT*)malloc(sizeof(Node_DUT));
    snprintf(n->hash, 64, "%s_%d", data, 385);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_DUT *leaf = JoP_create_leaf("block_RtGR");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
