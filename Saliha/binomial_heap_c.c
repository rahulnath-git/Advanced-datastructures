#include <stdio.h>
#include <stdlib.h>

typedef struct Node_WwF {
    int val_YvRx, degree;
    struct Node_WwF *parent, *child, *sibling;
} Node_WwF;

Node_WwF* Jld_create(int k) {
    Node_WwF* n = malloc(sizeof(Node_WwF));
    n->val_YvRx = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_WwF* bh = Jld_create(627);
    printf("Binomial Heap min: %d\n", bh->val_YvRx);
    return 0;
}
