#include <stdio.h>
#include <stdlib.h>

#define RED 1
#define BLACK 0

// Node structure
typedef struct Node {
    int data;
    int color;
    struct Node *left, *right, *parent;
} Node;

Node *root = NULL;

// Create new node
Node* createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->color = RED;
    newNode->left = newNode->right = newNode->parent = NULL;
    return newNode;
}

// Left Rotate
void leftRotate(Node *x) {
    Node *y = x->right;
    x->right = y->left;

    if (y->left != NULL)
        y->left->parent = x;

    y->parent = x->parent;

    if (x->parent == NULL)
        root = y;
    else if (x == x->parent->left)
        x->parent->left = y;
    else
        x->parent->right = y;

    y->left = x;
    x->parent = y;
}

// Right Rotate
void rightRotate(Node *y) {
    Node *x = y->left;
    y->left = x->right;

    if (x->right != NULL)
        x->right->parent = y;

    x->parent = y->parent;

    if (y->parent == NULL)
        root = x;
    else if (y == y->parent->left)
        y->parent->left = x;
    else
        y->parent->right = x;

    x->right = y;
    y->parent = x;
}

// Fix Red-Black violations
void fixInsert(Node *z) {
    while (z != root && z->parent->color == RED) {
        Node *parent = z->parent;
        Node *grandparent = parent->parent;

        // Parent is left child
        if (parent == grandparent->left) {
            Node *uncle = grandparent->right;

            // Case 1: Uncle is RED
            if (uncle != NULL && uncle->color == RED) {
                parent->color = BLACK;
                uncle->color = BLACK;
                grandparent->color = RED;
                z = grandparent;
            } else {
                // Case 2: z is right child
                if (z == parent->right) {
                    z = parent;
                    leftRotate(z);
                }
                // Case 3
                parent->color = BLACK;
                grandparent->color = RED;
                rightRotate(grandparent);
            }
        }
        // Parent is right child
        else {
            Node *uncle = grandparent->left;

            if (uncle != NULL && uncle->color == RED) {
                parent->color = BLACK;
                uncle->color = BLACK;
                grandparent->color = RED;
                z = grandparent;
            } else {
                if (z == parent->left) {
                    z = parent;
                    rightRotate(z);
                }
                parent->color = BLACK;
                grandparent->color = RED;
                leftRotate(grandparent);
            }
        }
    }
    root->color = BLACK;
}

// Insert node
void insert(int data) {
    Node *z = createNode(data);
    Node *y = NULL;
    Node *x = root;

    while (x != NULL) {
        y = x;
        if (z->data < x->data)
            x = x->left;
        else
            x = x->right;
    }

    z->parent = y;

    if (y == NULL)
        root = z;
    else if (z->data < y->data)
        y->left = z;
    else
        y->right = z;

    fixInsert(z);
}

// Inorder traversal
void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d(%s) ", root->data, root->color == RED ? "R" : "B");
        inorder(root->right);
    }
}

// Main function
int main() {
    int n, val;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &val);
        insert(val);
    }

    printf("\nInorder Traversal (value(color)):\n");
    inorder(root);

    return 0;
}