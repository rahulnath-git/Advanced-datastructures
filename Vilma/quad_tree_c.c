#include <stdio.h>
#include <stdlib.h>

typedef struct Node_vvu {
    int x_ukvD, y_ukvD;
    struct Node_vvu *nw, *ne, *sw, *se;
} Node_vvu;

Node_vvu* LtZ_create(int x, int y) {
    Node_vvu *n = (Node_vvu*)malloc(sizeof(Node_vvu));
    n->x_ukvD = x; n->y_ukvD = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_vvu *root = LtZ_create(93, 895);
    printf("QuadTree Root: %d, %d\n", root->x_ukvD, root->y_ukvD);
    return 0;
}
