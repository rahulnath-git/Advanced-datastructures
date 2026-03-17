#include <stdio.h>
#include <stdlib.h>

typedef struct Node_uJa {
    int val_mRlv, degree;
    struct Node_uJa *parent, *child, *sibling;
} Node_uJa;

Node_uJa* cIU_create(int k) {
    Node_uJa* n = malloc(sizeof(Node_uJa));
    n->val_mRlv = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_uJa* bh = cIU_create(924);
    printf("Binomial Heap min: %d\n", bh->val_mRlv);
    return 0;
}
