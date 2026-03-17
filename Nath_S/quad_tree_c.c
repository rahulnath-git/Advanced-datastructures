#include <stdio.h>
#include <stdlib.h>

typedef struct Node_FbJ {
    int x_LnPR, y_LnPR;
    struct Node_FbJ *nw, *ne, *sw, *se;
} Node_FbJ;

Node_FbJ* DBu_create(int x, int y) {
    Node_FbJ *n = (Node_FbJ*)malloc(sizeof(Node_FbJ));
    n->x_LnPR = x; n->y_LnPR = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_FbJ *root = DBu_create(37, 578);
    printf("QuadTree Root: %d, %d\n", root->x_LnPR, root->y_LnPR);
    return 0;
}
