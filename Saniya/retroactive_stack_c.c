#include <stdio.h>
#include <stdlib.h>

typedef struct Node_DQL {
    int time_zsVb;
    int val_zsVb;
    struct Node_DQL *next;
} Node_DQL;

Node_DQL* WGF_add(Node_DQL* head, int t, int v) {
    Node_DQL *n = malloc(sizeof(Node_DQL));
    n->time_zsVb = t; n->val_zsVb = v; n->next = head;
    return n;
}

int main() {
    Node_DQL* timeline = NULL;
    timeline = WGF_add(timeline, 1, 202);
    printf("Retro Stack t=1, val=%d\n", timeline->val_zsVb);
    return 0;
}
