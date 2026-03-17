#include <stdio.h>
#include <stdlib.h>

typedef struct Node_kYx {
    int x_Pyfc, y_Pyfc;
    struct Node_kYx *nw, *ne, *sw, *se;
} Node_kYx;

Node_kYx* LzN_create(int x, int y) {
    Node_kYx *n = (Node_kYx*)malloc(sizeof(Node_kYx));
    n->x_Pyfc = x; n->y_Pyfc = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_kYx *root = LzN_create(70, 524);
    printf("QuadTree Root: %d, %d\n", root->x_Pyfc, root->y_Pyfc);
    return 0;
}
