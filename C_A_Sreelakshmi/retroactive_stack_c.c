#include <stdio.h>
#include <stdlib.h>

typedef struct Node_pxv {
    int time_fgXm;
    int val_fgXm;
    struct Node_pxv *next;
} Node_pxv;

Node_pxv* cMd_add(Node_pxv* head, int t, int v) {
    Node_pxv *n = malloc(sizeof(Node_pxv));
    n->time_fgXm = t; n->val_fgXm = v; n->next = head;
    return n;
}

int main() {
    Node_pxv* timeline = NULL;
    timeline = cMd_add(timeline, 1, 141);
    printf("Retro Stack t=1, val=%d\n", timeline->val_fgXm);
    return 0;
}
