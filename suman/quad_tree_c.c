#include <stdio.h>
#include <stdlib.h>

typedef struct Node_muh {
    int x_lUWI, y_lUWI;
    struct Node_muh *nw, *ne, *sw, *se;
} Node_muh;

Node_muh* BdN_create(int x, int y) {
    Node_muh *n = (Node_muh*)malloc(sizeof(Node_muh));
    n->x_lUWI = x; n->y_lUWI = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_muh *root = BdN_create(81, 257);
    printf("QuadTree Root: %d, %d\n", root->x_lUWI, root->y_lUWI);
    return 0;
}
