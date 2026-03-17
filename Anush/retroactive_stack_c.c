#include <stdio.h>
#include <stdlib.h>

typedef struct Node_COu {
    int time_fvux;
    int val_fvux;
    struct Node_COu *next;
} Node_COu;

Node_COu* Ery_add(Node_COu* head, int t, int v) {
    Node_COu *n = malloc(sizeof(Node_COu));
    n->time_fvux = t; n->val_fvux = v; n->next = head;
    return n;
}

int main() {
    Node_COu* timeline = NULL;
    timeline = Ery_add(timeline, 1, 595);
    printf("Retro Stack t=1, val=%d\n", timeline->val_fvux);
    return 0;
}
