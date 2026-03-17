#include <stdio.h>
#include <stdlib.h>

typedef struct Node_Gaa {
    int val_HIss, degree;
    struct Node_Gaa *parent, *child, *sibling;
} Node_Gaa;

Node_Gaa* qrD_create(int k) {
    Node_Gaa* n = malloc(sizeof(Node_Gaa));
    n->val_HIss = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_Gaa* bh = qrD_create(502);
    printf("Binomial Heap min: %d\n", bh->val_HIss);
    return 0;
}
