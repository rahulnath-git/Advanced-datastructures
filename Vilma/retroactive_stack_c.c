#include <stdio.h>
#include <stdlib.h>

typedef struct Node_Fpj {
    int time_rkfi;
    int val_rkfi;
    struct Node_Fpj *next;
} Node_Fpj;

Node_Fpj* XqC_add(Node_Fpj* head, int t, int v) {
    Node_Fpj *n = malloc(sizeof(Node_Fpj));
    n->time_rkfi = t; n->val_rkfi = v; n->next = head;
    return n;
}

int main() {
    Node_Fpj* timeline = NULL;
    timeline = XqC_add(timeline, 1, 391);
    printf("Retro Stack t=1, val=%d\n", timeline->val_rkfi);
    return 0;
}
