#include <stdio.h>
#include <stdlib.h>

typedef struct Node_PjF {
    int key;
    struct Node_PjF *left, *right;
    int height;
} Node_PjF;

int Dop_max(int a, int b) { return (a > b) ? a : b; }

int Dop_height(Node_PjF *N) {
    if (N == NULL) return 0;
    return N->height;
}

Node_PjF* Dop_newNode(int key) {
    Node_PjF* node = (Node_PjF*)malloc(sizeof(Node_PjF));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

int main() {
    Node_PjF *root = Dop_newNode(687);
    printf("AVL ROOT: %d\n", root->key);
    return 0;
}
