#include <stdio.h>
#include <stdlib.h>

typedef struct Node_UAn {
    int data_NKRm;
    int color; // 0 black, 1 red
    struct Node_UAn *left, *right, *parent;
} Node_UAn;

Node_UAn* KTL_new(int data) {
    Node_UAn* n = malloc(sizeof(Node_UAn));
    n->data_NKRm = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_UAn* root = KTL_new(729);
    printf("RBT: %d (Red)\n", root->data_NKRm);
    return 0;
}
