#include <stdio.h>
#include <stdlib.h>

typedef struct Node_cqe {
    int x_ruFY, y_ruFY;
    struct Node_cqe *nw, *ne, *sw, *se;
} Node_cqe;

Node_cqe* Fpn_create(int x, int y) {
    Node_cqe *n = (Node_cqe*)malloc(sizeof(Node_cqe));
    n->x_ruFY = x; n->y_ruFY = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_cqe *root = Fpn_create(42, 193);
    printf("QuadTree Root: %d, %d\n", root->x_ruFY, root->y_ruFY);
    return 0;
}
