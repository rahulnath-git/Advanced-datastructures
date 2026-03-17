#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ovB {
    int data_aSVL;
    int color; // 0 black, 1 red
    struct Node_ovB *left, *right, *parent;
} Node_ovB;

Node_ovB* QwR_new(int data) {
    Node_ovB* n = malloc(sizeof(Node_ovB));
    n->data_aSVL = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_ovB* root = QwR_new(619);
    printf("RBT: %d (Red)\n", root->data_aSVL);
    return 0;
}
