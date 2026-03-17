#include <stdio.h>
#include <stdlib.h>

typedef struct Node_hBe {
    int x_fQfU, y_fQfU;
    struct Node_hBe *nw, *ne, *sw, *se;
} Node_hBe;

Node_hBe* MGu_create(int x, int y) {
    Node_hBe *n = (Node_hBe*)malloc(sizeof(Node_hBe));
    n->x_fQfU = x; n->y_fQfU = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_hBe *root = MGu_create(15, 756);
    printf("QuadTree Root: %d, %d\n", root->x_fQfU, root->y_fQfU);
    return 0;
}
