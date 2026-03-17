#include <stdio.h>
#include <stdlib.h>

typedef struct Node_MPu {
    int val_ZVbC, degree;
    struct Node_MPu *parent, *child, *sibling;
} Node_MPu;

Node_MPu* OCP_create(int k) {
    Node_MPu* n = malloc(sizeof(Node_MPu));
    n->val_ZVbC = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_MPu* bh = OCP_create(334);
    printf("Binomial Heap min: %d\n", bh->val_ZVbC);
    return 0;
}
