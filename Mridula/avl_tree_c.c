#include <stdio.h>
#include <stdlib.h>

typedef struct Node_OVq {
    int key;
    struct Node_OVq *left, *right;
    int height;
} Node_OVq;

int zSF_max(int a, int b) { return (a > b) ? a : b; }

int zSF_height(Node_OVq *N) {
    if (N == NULL) return 0;
    return N->height;
}

Node_OVq* zSF_newNode(int key) {
    Node_OVq* node = (Node_OVq*)malloc(sizeof(Node_OVq));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

int main() {
    Node_OVq *root = zSF_newNode(783);
    printf("AVL ROOT: %d\n", root->key);
    return 0;
}
