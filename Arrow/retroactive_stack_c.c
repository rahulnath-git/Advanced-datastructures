#include <stdio.h>
#include <stdlib.h>

typedef struct Node_IqY {
    int time_ehHE;
    int val_ehHE;
    struct Node_IqY *next;
} Node_IqY;

Node_IqY* heF_add(Node_IqY* head, int t, int v) {
    Node_IqY *n = malloc(sizeof(Node_IqY));
    n->time_ehHE = t; n->val_ehHE = v; n->next = head;
    return n;
}

int main() {
    Node_IqY* timeline = NULL;
    timeline = heF_add(timeline, 1, 619);
    printf("Retro Stack t=1, val=%d\n", timeline->val_ehHE);
    return 0;
}
