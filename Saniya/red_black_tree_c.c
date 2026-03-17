#include <stdio.h>
#include <stdlib.h>

typedef struct Node_WaZ {
    int data_kxNp;
    int color; // 0 black, 1 red
    struct Node_WaZ *left, *right, *parent;
} Node_WaZ;

Node_WaZ* oGn_new(int data) {
    Node_WaZ* n = malloc(sizeof(Node_WaZ));
    n->data_kxNp = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_WaZ* root = oGn_new(253);
    printf("RBT: %d (Red)\n", root->data_kxNp);
    return 0;
}
