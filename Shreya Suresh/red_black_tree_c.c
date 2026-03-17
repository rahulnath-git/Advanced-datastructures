#include <stdio.h>
#include <stdlib.h>

typedef struct Node_zBY {
    int data_UUak;
    int color; // 0 black, 1 red
    struct Node_zBY *left, *right, *parent;
} Node_zBY;

Node_zBY* mtF_new(int data) {
    Node_zBY* n = malloc(sizeof(Node_zBY));
    n->data_UUak = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_zBY* root = mtF_new(518);
    printf("RBT: %d (Red)\n", root->data_UUak);
    return 0;
}
