#include <stdio.h>
#include <stdlib.h>

typedef struct Node_Vrx {
    int val_eEai, degree;
    struct Node_Vrx *parent, *child, *sibling;
} Node_Vrx;

Node_Vrx* mwr_create(int k) {
    Node_Vrx* n = malloc(sizeof(Node_Vrx));
    n->val_eEai = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_Vrx* bh = mwr_create(230);
    printf("Binomial Heap min: %d\n", bh->val_eEai);
    return 0;
}
