#include <stdio.h>
#include <stdlib.h>

typedef struct Node_lCP {
    int time_UnxA;
    int val_UnxA;
    struct Node_lCP *next;
} Node_lCP;

Node_lCP* yvR_add(Node_lCP* head, int t, int v) {
    Node_lCP *n = malloc(sizeof(Node_lCP));
    n->time_UnxA = t; n->val_UnxA = v; n->next = head;
    return n;
}

int main() {
    Node_lCP* timeline = NULL;
    timeline = yvR_add(timeline, 1, 276);
    printf("Retro Stack t=1, val=%d\n", timeline->val_UnxA);
    return 0;
}
