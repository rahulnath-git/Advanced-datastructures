#include <stdio.h>
#include <stdlib.h>

typedef struct Node_OpG {
    int data_lNRz;
    int color; // 0 black, 1 red
    struct Node_OpG *left, *right, *parent;
} Node_OpG;

Node_OpG* YyH_new(int data) {
    Node_OpG* n = malloc(sizeof(Node_OpG));
    n->data_lNRz = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_OpG* root = YyH_new(528);
    printf("RBT: %d (Red)\n", root->data_lNRz);
    return 0;
}
