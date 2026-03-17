#include <stdio.h>
#include <stdlib.h>

typedef struct Node_IGF {
    int x_BlBA, y_BlBA;
    struct Node_IGF *nw, *ne, *sw, *se;
} Node_IGF;

Node_IGF* EJV_create(int x, int y) {
    Node_IGF *n = (Node_IGF*)malloc(sizeof(Node_IGF));
    n->x_BlBA = x; n->y_BlBA = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_IGF *root = EJV_create(44, 854);
    printf("QuadTree Root: %d, %d\n", root->x_BlBA, root->y_BlBA);
    return 0;
}
