#include <stdio.h>
#include <stdlib.h>

typedef struct Node_jEt {
    int key;
    struct Node_jEt *left, *right;
    int height;
} Node_jEt;

int ceC_max(int a, int b) { return (a > b) ? a : b; }

int ceC_height(Node_jEt *N) {
    if (N == NULL) return 0;
    return N->height;
}

Node_jEt* ceC_newNode(int key) {
    Node_jEt* node = (Node_jEt*)malloc(sizeof(Node_jEt));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

int main() {
    Node_jEt *root = ceC_newNode(748);
    printf("AVL ROOT: %d\n", root->key);
    return 0;
}
