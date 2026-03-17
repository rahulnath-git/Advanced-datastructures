#include <stdio.h>
#include <stdlib.h>

typedef struct Node_DBt {
    int val_gigV, degree;
    struct Node_DBt *parent, *child, *sibling;
} Node_DBt;

Node_DBt* jOq_create(int k) {
    Node_DBt* n = malloc(sizeof(Node_DBt));
    n->val_gigV = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_DBt* bh = jOq_create(503);
    printf("Binomial Heap min: %d\n", bh->val_gigV);
    return 0;
}
