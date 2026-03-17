#include <stdio.h>
#include <stdlib.h>

typedef struct Node_qmn {
    int time_ohAG;
    int val_ohAG;
    struct Node_qmn *next;
} Node_qmn;

Node_qmn* SDw_add(Node_qmn* head, int t, int v) {
    Node_qmn *n = malloc(sizeof(Node_qmn));
    n->time_ohAG = t; n->val_ohAG = v; n->next = head;
    return n;
}

int main() {
    Node_qmn* timeline = NULL;
    timeline = SDw_add(timeline, 1, 393);
    printf("Retro Stack t=1, val=%d\n", timeline->val_ohAG);
    return 0;
}
