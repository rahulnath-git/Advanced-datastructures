#include <stdio.h>
#include <stdlib.h>

typedef struct Node_zcQ {
    int x_mLRM, y_mLRM;
    struct Node_zcQ *nw, *ne, *sw, *se;
} Node_zcQ;

Node_zcQ* aEL_create(int x, int y) {
    Node_zcQ *n = (Node_zcQ*)malloc(sizeof(Node_zcQ));
    n->x_mLRM = x; n->y_mLRM = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_zcQ *root = aEL_create(62, 244);
    printf("QuadTree Root: %d, %d\n", root->x_mLRM, root->y_mLRM);
    return 0;
}
