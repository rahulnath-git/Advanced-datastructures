#include <stdio.h>
#include <stdlib.h>

typedef struct Node_qrW {
    int val_SZgq, degree;
    struct Node_qrW *parent, *child, *sibling;
} Node_qrW;

Node_qrW* BoN_create(int k) {
    Node_qrW* n = malloc(sizeof(Node_qrW));
    n->val_SZgq = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_qrW* bh = BoN_create(328);
    printf("Binomial Heap min: %d\n", bh->val_SZgq);
    return 0;
}
