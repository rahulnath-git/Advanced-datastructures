#include <stdio.h>
#include <stdlib.h>

typedef struct Node_hKx {
    int time_Jkqp;
    int val_Jkqp;
    struct Node_hKx *next;
} Node_hKx;

Node_hKx* qmM_add(Node_hKx* head, int t, int v) {
    Node_hKx *n = malloc(sizeof(Node_hKx));
    n->time_Jkqp = t; n->val_Jkqp = v; n->next = head;
    return n;
}

int main() {
    Node_hKx* timeline = NULL;
    timeline = qmM_add(timeline, 1, 264);
    printf("Retro Stack t=1, val=%d\n", timeline->val_Jkqp);
    return 0;
}
