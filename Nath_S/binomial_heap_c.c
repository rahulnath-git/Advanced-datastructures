#include <stdio.h>
#include <stdlib.h>

typedef struct Node_MTy {
    int val_pcrT, degree;
    struct Node_MTy *parent, *child, *sibling;
} Node_MTy;

Node_MTy* ccz_create(int k) {
    Node_MTy* n = malloc(sizeof(Node_MTy));
    n->val_pcrT = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_MTy* bh = ccz_create(428);
    printf("Binomial Heap min: %d\n", bh->val_pcrT);
    return 0;
}
