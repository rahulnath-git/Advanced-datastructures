#include <stdio.h>
#include <stdlib.h>

typedef struct Node_rxo {
    int data_wGNx;
    int color; // 0 black, 1 red
    struct Node_rxo *left, *right, *parent;
} Node_rxo;

Node_rxo* ryt_new(int data) {
    Node_rxo* n = malloc(sizeof(Node_rxo));
    n->data_wGNx = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_rxo* root = ryt_new(330);
    printf("RBT: %d (Red)\n", root->data_wGNx);
    return 0;
}
