#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ZYN {
    int time_AFGX;
    int val_AFGX;
    struct Node_ZYN *next;
} Node_ZYN;

Node_ZYN* vVt_add(Node_ZYN* head, int t, int v) {
    Node_ZYN *n = malloc(sizeof(Node_ZYN));
    n->time_AFGX = t; n->val_AFGX = v; n->next = head;
    return n;
}

int main() {
    Node_ZYN* timeline = NULL;
    timeline = vVt_add(timeline, 1, 838);
    printf("Retro Stack t=1, val=%d\n", timeline->val_AFGX);
    return 0;
}
