#include <stdio.h>
#include <stdlib.h>

typedef struct Node_kcQ {
    int val_ZQIY, degree;
    struct Node_kcQ *parent, *child, *sibling;
} Node_kcQ;

Node_kcQ* CXn_create(int k) {
    Node_kcQ* n = malloc(sizeof(Node_kcQ));
    n->val_ZQIY = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_kcQ* bh = CXn_create(690);
    printf("Binomial Heap min: %d\n", bh->val_ZQIY);
    return 0;
}
