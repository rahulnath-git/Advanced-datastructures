#include <stdio.h>
#include <stdlib.h>

typedef struct Node_GeI {
    int x_MFit, y_MFit;
    struct Node_GeI *nw, *ne, *sw, *se;
} Node_GeI;

Node_GeI* Cxc_create(int x, int y) {
    Node_GeI *n = (Node_GeI*)malloc(sizeof(Node_GeI));
    n->x_MFit = x; n->y_MFit = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_GeI *root = Cxc_create(26, 198);
    printf("QuadTree Root: %d, %d\n", root->x_MFit, root->y_MFit);
    return 0;
}
