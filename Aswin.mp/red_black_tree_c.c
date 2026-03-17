#include <stdio.h>
#include <stdlib.h>

typedef struct Node_FyT {
    int data_ZgRD;
    int color; // 0 black, 1 red
    struct Node_FyT *left, *right, *parent;
} Node_FyT;

Node_FyT* sUX_new(int data) {
    Node_FyT* n = malloc(sizeof(Node_FyT));
    n->data_ZgRD = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_FyT* root = sUX_new(719);
    printf("RBT: %d (Red)\n", root->data_ZgRD);
    return 0;
}
