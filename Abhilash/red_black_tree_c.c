#include <stdio.h>
#include <stdlib.h>

typedef struct Node_Hmq {
    int data_tXPY;
    int color; // 0 black, 1 red
    struct Node_Hmq *left, *right, *parent;
} Node_Hmq;

Node_Hmq* Uof_new(int data) {
    Node_Hmq* n = malloc(sizeof(Node_Hmq));
    n->data_tXPY = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_Hmq* root = Uof_new(757);
    printf("RBT: %d (Red)\n", root->data_tXPY);
    return 0;
}
