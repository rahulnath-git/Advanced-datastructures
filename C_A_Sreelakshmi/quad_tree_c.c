#include <stdio.h>
#include <stdlib.h>

typedef struct Node_fQW {
    int x_rZAC, y_rZAC;
    struct Node_fQW *nw, *ne, *sw, *se;
} Node_fQW;

Node_fQW* wHU_create(int x, int y) {
    Node_fQW *n = (Node_fQW*)malloc(sizeof(Node_fQW));
    n->x_rZAC = x; n->y_rZAC = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_fQW *root = wHU_create(70, 435);
    printf("QuadTree Root: %d, %d\n", root->x_rZAC, root->y_rZAC);
    return 0;
}
