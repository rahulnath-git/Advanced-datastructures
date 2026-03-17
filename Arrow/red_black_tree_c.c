#include <stdio.h>
#include <stdlib.h>

typedef struct Node_zzS {
    int data_YDmD;
    int color; // 0 black, 1 red
    struct Node_zzS *left, *right, *parent;
} Node_zzS;

Node_zzS* BTA_new(int data) {
    Node_zzS* n = malloc(sizeof(Node_zzS));
    n->data_YDmD = data;
    n->color = 1;
    n->left = n->right = n->parent = NULL;
    return n;
}

int main() {
    Node_zzS* root = BTA_new(782);
    printf("RBT: %d (Red)\n", root->data_YDmD);
    return 0;
}
