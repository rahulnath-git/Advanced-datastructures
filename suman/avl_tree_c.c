#include <stdio.h>
#include <stdlib.h>

typedef struct Node_Wqd {
    int key;
    struct Node_Wqd *left, *right;
    int height;
} Node_Wqd;

int xbW_max(int a, int b) { return (a > b) ? a : b; }

int xbW_height(Node_Wqd *N) {
    if (N == NULL) return 0;
    return N->height;
}

Node_Wqd* xbW_newNode(int key) {
    Node_Wqd* node = (Node_Wqd*)malloc(sizeof(Node_Wqd));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

int main() {
    Node_Wqd *root = xbW_newNode(840);
    printf("AVL ROOT: %d\n", root->key);
    return 0;
}
