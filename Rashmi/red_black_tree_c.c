#include <stdio.h>
#include <stdlib.h>

typedef struct Node_jav {
    int data_nDYN;
    int color; // 0 black, 1 red
    struct Node_jav *left, *right, *parent;
} Node_jav;

Node_jav* JQX_new(int data) {
    Node_jav* n = malloc(sizeof(Node_jav));
    n->data_nDYN = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_jav* root = JQX_new(930);
    printf("RBT: %d (Red)\n", root->data_nDYN);
    return 0;
}
