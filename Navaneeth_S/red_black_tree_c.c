#include <stdio.h>
#include <stdlib.h>

typedef struct Node_sNw {
    int data_QsCE;
    int color; // 0 black, 1 red
    struct Node_sNw *left, *right, *parent;
} Node_sNw;

Node_sNw* qvM_new(int data) {
    Node_sNw* n = malloc(sizeof(Node_sNw));
    n->data_QsCE = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_sNw* root = qvM_new(909);
    printf("RBT: %d (Red)\n", root->data_QsCE);
    return 0;
}
