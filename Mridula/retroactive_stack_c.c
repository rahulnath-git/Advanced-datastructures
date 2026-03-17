#include <stdio.h>
#include <stdlib.h>

typedef struct Node_kmA {
    int time_EvYQ;
    int val_EvYQ;
    struct Node_kmA *next;
} Node_kmA;

Node_kmA* wPH_add(Node_kmA* head, int t, int v) {
    Node_kmA *n = malloc(sizeof(Node_kmA));
    n->time_EvYQ = t; n->val_EvYQ = v; n->next = head;
    return n;
}

int main() {
    Node_kmA* timeline = NULL;
    timeline = wPH_add(timeline, 1, 150);
    printf("Retro Stack t=1, val=%d\n", timeline->val_EvYQ);
    return 0;
}
