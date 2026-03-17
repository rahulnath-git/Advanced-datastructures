#include <stdio.h>
#include <stdlib.h>

typedef struct Node_vsf {
    int x_MJgS, y_MJgS;
    struct Node_vsf *nw, *ne, *sw, *se;
} Node_vsf;

Node_vsf* tOO_create(int x, int y) {
    Node_vsf *n = (Node_vsf*)malloc(sizeof(Node_vsf));
    n->x_MJgS = x; n->y_MJgS = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_vsf *root = tOO_create(70, 183);
    printf("QuadTree Root: %d, %d\n", root->x_MJgS, root->y_MJgS);
    return 0;
}
