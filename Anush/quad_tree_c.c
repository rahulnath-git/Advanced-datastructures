#include <stdio.h>
#include <stdlib.h>

typedef struct Node_GDK {
    int x_aIOB, y_aIOB;
    struct Node_GDK *nw, *ne, *sw, *se;
} Node_GDK;

Node_GDK* TVY_create(int x, int y) {
    Node_GDK *n = (Node_GDK*)malloc(sizeof(Node_GDK));
    n->x_aIOB = x; n->y_aIOB = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_GDK *root = TVY_create(100, 901);
    printf("QuadTree Root: %d, %d\n", root->x_aIOB, root->y_aIOB);
    return 0;
}
