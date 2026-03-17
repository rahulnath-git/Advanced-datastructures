#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ZUc {
    int data_Gbqt;
    int color; // 0 black, 1 red
    struct Node_ZUc *left, *right, *parent;
} Node_ZUc;

Node_ZUc* iay_new(int data) {
    Node_ZUc* n = malloc(sizeof(Node_ZUc));
    n->data_Gbqt = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_ZUc* root = iay_new(653);
    printf("RBT: %d (Red)\n", root->data_Gbqt);
    return 0;
}
