#include <stdio.h>
#include <stdlib.h>

typedef struct Node_GAg {
    int time_rjSf;
    int val_rjSf;
    struct Node_GAg *next;
} Node_GAg;

Node_GAg* ZOv_add(Node_GAg* head, int t, int v) {
    Node_GAg *n = malloc(sizeof(Node_GAg));
    n->time_rjSf = t; n->val_rjSf = v; n->next = head;
    return n;
}

int main() {
    Node_GAg* timeline = NULL;
    timeline = ZOv_add(timeline, 1, 386);
    printf("Retro Stack t=1, val=%d\n", timeline->val_rjSf);
    return 0;
}
