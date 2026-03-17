#include <stdio.h>
#include <stdlib.h>

typedef struct Node_jXg {
    int key;
    struct Node_jXg *left, *right;
    int height;
} Node_jXg;

int pit_max(int a, int b) { return (a > b) ? a : b; }

int pit_height(Node_jXg *N) {
    if (N == NULL) return 0;
    return N->height;
}

Node_jXg* pit_newNode(int key) {
    Node_jXg* node = (Node_jXg*)malloc(sizeof(Node_jXg));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

int main() {
    Node_jXg *root = pit_newNode(805);
    printf("AVL ROOT: %d\n", root->key);
    return 0;
}
