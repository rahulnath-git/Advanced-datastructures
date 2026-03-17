#include <stdio.h>
#include <stdlib.h>

typedef struct Node_gsB {
    int time_bIQE;
    int val_bIQE;
    struct Node_gsB *next;
} Node_gsB;

Node_gsB* gsw_add(Node_gsB* head, int t, int v) {
    Node_gsB *n = malloc(sizeof(Node_gsB));
    n->time_bIQE = t; n->val_bIQE = v; n->next = head;
    return n;
}

int main() {
    Node_gsB* timeline = NULL;
    timeline = gsw_add(timeline, 1, 929);
    printf("Retro Stack t=1, val=%d\n", timeline->val_bIQE);
    return 0;
}
