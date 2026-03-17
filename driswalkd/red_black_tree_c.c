#include <stdio.h>
#include <stdlib.h>

typedef struct Node_zrD {
    int data_IFOH;
    int color; // 0 black, 1 red
    struct Node_zrD *left, *right, *parent;
} Node_zrD;

Node_zrD* JBF_new(int data) {
    Node_zrD* n = malloc(sizeof(Node_zrD));
    n->data_IFOH = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_zrD* root = JBF_new(909);
    printf("RBT: %d (Red)\n", root->data_IFOH);
    return 0;
}
