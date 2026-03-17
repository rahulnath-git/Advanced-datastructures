#include <stdio.h>
#include <stdlib.h>

typedef struct Node_iFz {
    int key;
    struct Node_iFz *left, *right;
    int height;
} Node_iFz;

int aGz_max(int a, int b) { return (a > b) ? a : b; }

int aGz_height(Node_iFz *N) {
    if (N == NULL) return 0;
    return N->height;
}

Node_iFz* aGz_newNode(int key) {
    Node_iFz* node = (Node_iFz*)malloc(sizeof(Node_iFz));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

int main() {
    Node_iFz *root = aGz_newNode(148);
    printf("AVL ROOT: %d\n", root->key);
    return 0;
}
