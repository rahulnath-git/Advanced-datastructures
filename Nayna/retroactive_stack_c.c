#include <stdio.h>
#include <stdlib.h>

typedef struct Node_WEY {
    int time_ZdnE;
    int val_ZdnE;
    struct Node_WEY *next;
} Node_WEY;

Node_WEY* xWR_add(Node_WEY* head, int t, int v) {
    Node_WEY *n = malloc(sizeof(Node_WEY));
    n->time_ZdnE = t; n->val_ZdnE = v; n->next = head;
    return n;
}

int main() {
    Node_WEY* timeline = NULL;
    timeline = xWR_add(timeline, 1, 897);
    printf("Retro Stack t=1, val=%d\n", timeline->val_ZdnE);
    return 0;
}
