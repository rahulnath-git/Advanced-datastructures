#include <stdio.h>
#include <stdlib.h>

typedef struct Node_HJh {
    int key;
    struct Node_HJh *left, *right;
    int height;
} Node_HJh;

int XaU_max(int a, int b) { return (a > b) ? a : b; }

int XaU_height(Node_HJh *N) {
    if (N == NULL) return 0;
    return N->height;
}

Node_HJh* XaU_newNode(int key) {
    Node_HJh* node = (Node_HJh*)malloc(sizeof(Node_HJh));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

int main() {
    Node_HJh *root = XaU_newNode(399);
    printf("AVL ROOT: %d\n", root->key);
    return 0;
}
