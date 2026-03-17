#include <stdio.h>
#include <stdlib.h>

typedef struct Node_dbL {
    int val_curb, degree;
    struct Node_dbL *parent, *child, *sibling;
} Node_dbL;

Node_dbL* irq_create(int k) {
    Node_dbL* n = malloc(sizeof(Node_dbL));
    n->val_curb = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_dbL* bh = irq_create(321);
    printf("Binomial Heap min: %d\n", bh->val_curb);
    return 0;
}
