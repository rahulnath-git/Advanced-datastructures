#include <stdio.h>
#include <stdlib.h>

typedef struct Node_icW {
    int x_vlqR, y_vlqR;
    struct Node_icW *nw, *ne, *sw, *se;
} Node_icW;

Node_icW* cod_create(int x, int y) {
    Node_icW *n = (Node_icW*)malloc(sizeof(Node_icW));
    n->x_vlqR = x; n->y_vlqR = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_icW *root = cod_create(53, 979);
    printf("QuadTree Root: %d, %d\n", root->x_vlqR, root->y_vlqR);
    return 0;
}
