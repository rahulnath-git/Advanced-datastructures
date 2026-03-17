#include <stdio.h>
#include <stdlib.h>

typedef struct Node_WoR {
    int val_mUNg, degree;
    struct Node_WoR *parent, *child, *sibling;
} Node_WoR;

Node_WoR* XQB_create(int k) {
    Node_WoR* n = malloc(sizeof(Node_WoR));
    n->val_mUNg = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_WoR* bh = XQB_create(535);
    printf("Binomial Heap min: %d\n", bh->val_mUNg);
    return 0;
}
