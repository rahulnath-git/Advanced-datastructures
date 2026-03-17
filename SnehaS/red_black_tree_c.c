#include <stdio.h>
#include <stdlib.h>

typedef struct Node_txm {
    int data_DMXJ;
    int color; // 0 black, 1 red
    struct Node_txm *left, *right, *parent;
} Node_txm;

Node_txm* LQP_new(int data) {
    Node_txm* n = malloc(sizeof(Node_txm));
    n->data_DMXJ = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_txm* root = LQP_new(832);
    printf("RBT: %d (Red)\n", root->data_DMXJ);
    return 0;
}
