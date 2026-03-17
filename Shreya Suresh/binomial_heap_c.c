#include <stdio.h>
#include <stdlib.h>

typedef struct Node_sxU {
    int val_oAgN, degree;
    struct Node_sxU *parent, *child, *sibling;
} Node_sxU;

Node_sxU* WZr_create(int k) {
    Node_sxU* n = malloc(sizeof(Node_sxU));
    n->val_oAgN = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_sxU* bh = WZr_create(763);
    printf("Binomial Heap min: %d\n", bh->val_oAgN);
    return 0;
}
