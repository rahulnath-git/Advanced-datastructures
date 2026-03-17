#include <stdio.h>
#include <stdlib.h>

typedef struct Node_nLi {
    int x_ySho, y_ySho;
    struct Node_nLi *nw, *ne, *sw, *se;
} Node_nLi;

Node_nLi* LgN_create(int x, int y) {
    Node_nLi *n = (Node_nLi*)malloc(sizeof(Node_nLi));
    n->x_ySho = x; n->y_ySho = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_nLi *root = LgN_create(71, 549);
    printf("QuadTree Root: %d, %d\n", root->x_ySho, root->y_ySho);
    return 0;
}
