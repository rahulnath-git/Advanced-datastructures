#include <stdio.h>
#include <stdlib.h>

typedef struct Node_fLX {
    int val_VXaK, degree;
    struct Node_fLX *parent, *child, *sibling;
} Node_fLX;

Node_fLX* maT_create(int k) {
    Node_fLX* n = malloc(sizeof(Node_fLX));
    n->val_VXaK = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_fLX* bh = maT_create(773);
    printf("Binomial Heap min: %d\n", bh->val_VXaK);
    return 0;
}
