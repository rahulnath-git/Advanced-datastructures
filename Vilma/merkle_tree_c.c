#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_Nlp {
    char hash[64];
    struct Node_Nlp *left, *right;
} Node_Nlp;

Node_Nlp* uWj_create_leaf(const char* data) {
    Node_Nlp *n = (Node_Nlp*)malloc(sizeof(Node_Nlp));
    snprintf(n->hash, 64, "%s_%d", data, 224);
    n->left = n->right = NULL;
    return n;
}

int main() {
    Node_Nlp *leaf = uWj_create_leaf("block_ycZm");
    printf("Merkle Hash: %s\n", leaf->hash);
    return 0;
}
