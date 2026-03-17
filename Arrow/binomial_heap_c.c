#include <stdio.h>
#include <stdlib.h>

typedef struct Node_EKJ {
    int val_wcoE, degree;
    struct Node_EKJ *parent, *child, *sibling;
} Node_EKJ;

Node_EKJ* gQA_create(int k) {
    Node_EKJ* n = malloc(sizeof(Node_EKJ));
    n->val_wcoE = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_EKJ* bh = gQA_create(671);
    printf("Binomial Heap min: %d\n", bh->val_wcoE);
    return 0;
}
