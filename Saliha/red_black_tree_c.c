#include <stdio.h>
#include <stdlib.h>

typedef struct Node_SFL {
    int data_UnES;
    int color; // 0 black, 1 red
    struct Node_SFL *left, *right, *parent;
} Node_SFL;

Node_SFL* NKS_new(int data) {
    Node_SFL* n = malloc(sizeof(Node_SFL));
    n->data_UnES = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_SFL* root = NKS_new(625);
    printf("RBT: %d (Red)\n", root->data_UnES);
    return 0;
}
