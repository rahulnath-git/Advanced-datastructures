#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_jAb {
    char hash[64];
    struct Node_jAb *left, *right;
} Node_jAb;

Node_jAb* wnS_create_leaf(const char* data) {
    Node_jAb *n = (Node_jAb*)malloc(sizeof(Node_jAb));
    snprintf(n->hash, 64, "%s_%d", data, 831);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_jAb *leaf = wnS_create_leaf("block_ADtG");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
