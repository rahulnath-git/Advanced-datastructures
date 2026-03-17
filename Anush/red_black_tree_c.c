#include <stdio.h>
#include <stdlib.h>

typedef struct Node_RDa {
    int data_jVOC;
    int color; // 0 black, 1 red
    struct Node_RDa *left, *right, *parent;
} Node_RDa;

Node_RDa* oAx_new(int data) {
    Node_RDa* n = malloc(sizeof(Node_RDa));
    n->data_jVOC = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_RDa* root = oAx_new(790);
    printf("RBT: %d (Red)\n", root->data_jVOC);
    return 0;
}
