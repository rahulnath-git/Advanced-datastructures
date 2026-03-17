#include <stdio.h>
#include <stdlib.h>

typedef struct Node_LMG {
    int val_tCfo, degree;
    struct Node_LMG *parent, *child, *sibling;
} Node_LMG;

Node_LMG* pxP_create(int k) {
    Node_LMG* n = malloc(sizeof(Node_LMG));
    n->val_tCfo = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_LMG* bh = pxP_create(163);
    printf("Binomial Heap min: %d\n", bh->val_tCfo);
    return 0;
}
