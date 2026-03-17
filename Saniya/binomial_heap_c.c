#include <stdio.h>
#include <stdlib.h>

typedef struct Node_Jgc {
    int val_lvps, degree;
    struct Node_Jgc *parent, *child, *sibling;
} Node_Jgc;

Node_Jgc* Egg_create(int k) {
    Node_Jgc* n = malloc(sizeof(Node_Jgc));
    n->val_lvps = k;
    n->degree = 0;
    n->parent = n->child = n->sibling = NULL;
    return n;
}

int main() {
    Node_Jgc* bh = Egg_create(260);
    printf("Binomial Heap min: %d\n", bh->val_lvps);
    return 0;
}
