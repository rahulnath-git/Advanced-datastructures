#include <stdio.h>
#include <stdlib.h>

typedef struct Node_qsS {
    int val_zQzX, degree;
    struct Node_qsS *parent, *child, *sibling;
} Node_qsS;

Node_qsS* Ieg_create(int k) {
    Node_qsS* n = malloc(sizeof(Node_qsS));
    n->val_zQzX = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_qsS* bh = Ieg_create(343);
    printf("Binomial Heap min: %d\n", bh->val_zQzX);
    return 0;
}
