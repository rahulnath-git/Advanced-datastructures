#include <stdio.h>
#include <stdlib.h>

typedef struct Node_zTR {
    int key;
    struct Node_zTR *left, *right;
    int height;
} Node_zTR;

int Uxp_max(int a, int b) { return (a > b) ? a : b; }

int Uxp_height(Node_zTR *N) {
    if (N == NULL) return 0;
    return N->height;
}

Node_zTR* Uxp_newNode(int key) {
    Node_zTR* node = (Node_zTR*)malloc(sizeof(Node_zTR));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

int main() {
    Node_zTR *root = Uxp_newNode(750);
    printf("AVL ROOT: %d\n", root->key);
    return 0;
}
