#include <stdio.h>
#include <stdlib.h>

typedef struct Node_huP {
    int data_pOyN;
    int color; // 0 black, 1 red
    struct Node_huP *left, *right, *parent;
} Node_huP;

Node_huP* mLm_new(int data) {
    Node_huP* n = malloc(sizeof(Node_huP));
    n->data_pOyN = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_huP* root = mLm_new(647);
    printf("RBT: %d (Red)\n", root->data_pOyN);
    return 0;
}
