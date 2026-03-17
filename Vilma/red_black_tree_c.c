#include <stdio.h>
#include <stdlib.h>

typedef struct Node_mwo {
    int data_DBEb;
    int color; // 0 black, 1 red
    struct Node_mwo *left, *right, *parent;
} Node_mwo;

Node_mwo* ulh_new(int data) {
    Node_mwo* n = malloc(sizeof(Node_mwo));
    n->data_DBEb = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_mwo* root = ulh_new(817);
    printf("RBT: %d (Red)\n", root->data_DBEb);
    return 0;
}
