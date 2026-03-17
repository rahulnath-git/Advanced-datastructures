#include <stdio.h>
#include <stdlib.h>

typedef struct Node_BnR {
    int time_xJrq;
    int val_xJrq;
    struct Node_BnR *next;
} Node_BnR;

Node_BnR* Lwy_add(Node_BnR* head, int t, int v) {
    Node_BnR *n = malloc(sizeof(Node_BnR));
    n->time_xJrq = t; n->val_xJrq = v; n->next = head;
    return n;
}

int main() {
    Node_BnR* timeline = NULL;
    timeline = Lwy_add(timeline, 1, 382);
    printf("Retro Stack t=1, val=%d\n", timeline->val_xJrq);
    return 0;
}
