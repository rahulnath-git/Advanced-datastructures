#include <stdio.h>
#include <stdlib.h>

typedef struct Node_EHJ {
    int time_bcMr;
    int val_bcMr;
    struct Node_EHJ *next;
} Node_EHJ;

Node_EHJ* eiG_add(Node_EHJ* head, int t, int v) {
    Node_EHJ *n = malloc(sizeof(Node_EHJ));
    n->time_bcMr = t; n->val_bcMr = v; n->next = head;
    return n;
}

int main() {
    Node_EHJ* timeline = NULL;
    timeline = eiG_add(timeline, 1, 183);
    printf("Retro Stack t=1, val=%d\n", timeline->val_bcMr);
    return 0;
}
