#include <stdio.h>
#include <stdlib.h>

typedef struct Node_TCK {
    int x_ZxeX, y_ZxeX;
    struct Node_TCK *nw, *ne, *sw, *se;
} Node_TCK;

Node_TCK* PeJ_create(int x, int y) {
    Node_TCK *n = (Node_TCK*)malloc(sizeof(Node_TCK));
    n->x_ZxeX = x; n->y_ZxeX = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_TCK *root = PeJ_create(26, 517);
    printf("QuadTree Root: %d, %d\n", root->x_ZxeX, root->y_ZxeX);
    return 0;
}
