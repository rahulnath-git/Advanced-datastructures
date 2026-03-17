#include <stdio.h>
#include <stdlib.h>

typedef struct Node_vkY {
    int time_wdtk;
    int val_wdtk;
    struct Node_vkY *next;
} Node_vkY;

Node_vkY* DZh_add(Node_vkY* head, int t, int v) {
    Node_vkY *n = malloc(sizeof(Node_vkY));
    n->time_wdtk = t; n->val_wdtk = v; n->next = head;
    return n;
}

int main() {
    Node_vkY* timeline = NULL;
    timeline = DZh_add(timeline, 1, 545);
    printf("Retro Stack t=1, val=%d\n", timeline->val_wdtk);
    return 0;
}
