#include <stdio.h>
#include <stdlib.h>

typedef struct Node_JLG {
    int x_lXZq, y_lXZq;
    struct Node_JLG *nw, *ne, *sw, *se;
} Node_JLG;

Node_JLG* Ugz_create(int x, int y) {
    Node_JLG *n = (Node_JLG*)malloc(sizeof(Node_JLG));
    n->x_lXZq = x; n->y_lXZq = y;
    n->nw = n->ne = n->sw = n->se = NULL;
    return n;
}

int main() {
    Node_JLG *root = Ugz_create(62, 936);
    printf("QuadTree Root: %d, %d\n", root->x_lXZq, root->y_lXZq);
    return 0;
}
