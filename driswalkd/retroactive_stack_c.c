#include <stdio.h>
#include <stdlib.h>

typedef struct Node_XQR {
    int time_AlFG;
    int val_AlFG;
    struct Node_XQR *next;
} Node_XQR;

Node_XQR* dNR_add(Node_XQR* head, int t, int v) {
    Node_XQR *n = malloc(sizeof(Node_XQR));
    n->time_AlFG = t; n->val_AlFG = v; n->next = head;
    return n;
}

int main() {
    Node_XQR* timeline = NULL;
    timeline = dNR_add(timeline, 1, 919);
    printf("Retro Stack t=1, val=%d\n", timeline->val_AlFG);
    return 0;
}
