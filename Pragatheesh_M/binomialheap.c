#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int key;
    int degree;
    struct Node *parent;
    struct Node *child;
    struct Node *sibling;
} Node;

// Create a new node
Node* createNode(int key) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->key = key;
    node->degree = 0;
    node->parent = node->child = node->sibling = NULL;
    return node;
}

// Merge root lists
Node* merge(Node* h1, Node* h2) {
    if (!h1) return h2;
    if (!h2) return h1;

    Node *head = NULL, *tail = NULL;

    while (h1 && h2) {
        Node* min;
        if (h1->degree <= h2->degree) {
            min = h1;
            h1 = h1->sibling;
        } else {
            min = h2;
            h2 = h2->sibling;
        }

        if (!head) {
            head = tail = min;
        } else {
            tail->sibling = min;
            tail = min;
        }
    }

    if (h1) tail->sibling = h1;
    if (h2) tail->sibling = h2;

    return head;
}

// Link trees
void linkTrees(Node* y, Node* z) {
    y->parent = z;
    y->sibling = z->child;
    z->child = y;
    z->degree++;
}

// Union of heaps
Node* unionHeap(Node* h1, Node* h2) {
    Node* newHead = merge(h1, h2);
    if (!newHead) return NULL;

    Node *prev = NULL, *curr = newHead, *next = curr->sibling;

    while (next) {
        if ((curr->degree != next->degree) ||
            (next->sibling && next->sibling->degree == curr->degree)) {
            prev = curr;
            curr = next;
        } else {
            if (curr->key <= next->key) {
                curr->sibling = next->sibling;
                linkTrees(next, curr);
            } else {
                if (!prev)
                    newHead = next;
                else
                    prev->sibling = next;

                linkTrees(curr, next);
                curr = next;
            }
        }
        next = curr->sibling;
    }

    return newHead;
}

// Insert key
Node* insert(Node* heap, int key) {
    Node* temp = createNode(key);
    return unionHeap(heap, temp);
}

// Find minimum
Node* getMin(Node* heap) {
    if (!heap) return NULL;

    Node* minNode = heap;
    Node* curr = heap;

    while (curr) {
        if (curr->key < minNode->key)
            minNode = curr;
        curr = curr->sibling;
    }
    return minNode;
}

// Reverse list
Node* reverse(Node* node) {
    Node* prev = NULL;
    Node* curr = node;
    Node* next;

    while (curr) {
        curr->parent = NULL;
        next = curr->sibling;
        curr->sibling = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Extract minimum
Node* extractMin(Node* heap) {
    if (!heap) return NULL;

    Node *minNode = heap, *minPrev = NULL;
    Node *curr = heap, *prev = NULL;

    while (curr) {
        if (curr->key < minNode->key) {
            minNode = curr;
            minPrev = prev;
        }
        prev = curr;
        curr = curr->sibling;
    }

    if (minPrev)
        minPrev->sibling = minNode->sibling;
    else
        heap = minNode->sibling;

    Node* child = reverse(minNode->child);
    heap = unionHeap(heap, child);

    printf("Extracted min: %d\n", minNode->key);
    free(minNode);

    return heap;
}

// Display heap
void display(Node* heap) {
    printf("Heap: ");
    while (heap) {
        printf("%d ", heap->key);
        heap = heap->sibling;
    }
    printf("\n");
}

// Main
int main() {
    Node* heap = NULL;
    int choice, val;

    while (1) {
        printf("\n1.Insert\n2.Get Min\n3.Extract Min\n4.Display\n5.Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            heap = insert(heap, val);
            break;

        case 2: {
            Node* min = getMin(heap);
            if (min)
                printf("Minimum: %d\n", min->key);
            else
                printf("Heap is empty\n");
            break;
        }

        case 3:
            heap = extractMin(heap);
            break;

        case 4:
            display(heap);
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
}