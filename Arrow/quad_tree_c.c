#include <stdio.h>
#include <stdlib.h>

typedef struct Node_vgE {
    int x_CoNA, y_CoNA;
    struct Node_vgE *nw, *ne, *sw, *se;
} Node_vgE;

Node_vgE* dxW_create(int x, int y) {
    Node_vgE *n = (Node_vgE*)malloc(sizeof(Node_vgE));
    n->x_CoNA = x; n->y_CoNA = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_vgE *root = dxW_create(12, 881);
    printf("QuadTree Root: %d, %d\n", root->x_CoNA, root->y_CoNA);
    return 0;
}
