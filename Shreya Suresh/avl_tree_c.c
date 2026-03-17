#include <stdio.h>
#include <stdlib.h>

typedef struct Node_Dhs {
    int key;
    struct Node_Dhs *left, *right;
    int height;
} Node_Dhs;

int EWX_max(int a, int b) { return (a > b) ? a : b; }

int EWX_height(Node_Dhs *N) {
    if (N == NULL) return 0;
    return N->height;
}

Node_Dhs* EWX_newNode(int key) {
    Node_Dhs* node = (Node_Dhs*)malloc(sizeof(Node_Dhs));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

int main() {
    Node_Dhs *root = EWX_newNode(818);
    printf("AVL ROOT: %d\n", root->key);
    return 0;
}
