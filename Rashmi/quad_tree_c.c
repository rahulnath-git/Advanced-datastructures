#include <stdio.h>
#include <stdlib.h>

typedef struct Node_vEq {
    int x_IvYr, y_IvYr;
    struct Node_vEq *nw, *ne, *sw, *se;
} Node_vEq;

Node_vEq* luF_create(int x, int y) {
    Node_vEq *n = (Node_vEq*)malloc(sizeof(Node_vEq));
    n->x_IvYr = x; n->y_IvYr = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_vEq *root = luF_create(19, 819);
    printf("QuadTree Root: %d, %d\n", root->x_IvYr, root->y_IvYr);
    return 0;
}
