#include <stdio.h>
#include <stdlib.h>

typedef struct Node_wvF {
    int val_Ifkv, degree;
    struct Node_wvF *parent, *child, *sibling;
} Node_wvF;

Node_wvF* xCs_create(int k) {
    Node_wvF* n = malloc(sizeof(Node_wvF));
    n->val_Ifkv = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_wvF* bh = xCs_create(167);
    printf("Binomial Heap min: %d\n", bh->val_Ifkv);
    return 0;
}
