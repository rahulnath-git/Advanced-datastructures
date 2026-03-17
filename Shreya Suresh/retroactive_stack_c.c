#include <stdio.h>
#include <stdlib.h>

typedef struct Node_KQs {
    int time_wPrS;
    int val_wPrS;
    struct Node_KQs *next;
} Node_KQs;

Node_KQs* Dqw_add(Node_KQs* head, int t, int v) {
    Node_KQs *n = malloc(sizeof(Node_KQs));
    n->time_wPrS = t; n->val_wPrS = v; n->next = head;
    return n;
}

int main() {
    Node_KQs* timeline = NULL;
    timeline = Dqw_add(timeline, 1, 452);
    printf("Retro Stack t=1, val=%d\n", timeline->val_wPrS);
    return 0;
}
