#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ZKS {
    int key;
    struct Node_ZKS *left, *right;
    int height;
} Node_ZKS;

int xRP_max(int a, int b) { return (a > b) ? a : b; }

int xRP_height(Node_ZKS *N) {
    if (N == NULL) return 0;
    return N->height;
}

Node_ZKS* xRP_newNode(int key) {
    Node_ZKS* node = (Node_ZKS*)malloc(sizeof(Node_ZKS));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

int main() {
    Node_ZKS *root = xRP_newNode(603);
    printf("AVL ROOT: %d\n", root->key);
    return 0;
}
