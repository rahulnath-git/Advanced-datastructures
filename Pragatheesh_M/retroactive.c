#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Operation types
#define INSERT 1
#define DELETE 2

// Operation structure
typedef struct {
    int type;
    int value;
    int time;
} Operation;

// BST Node
typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

Operation ops[MAX];
int opCount = 0;

// Create node
Node* createNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Insert in BST
Node* insert(Node* root, int data) {
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

// Find minimum
Node* findMin(Node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

// Delete in BST
Node* deleteNode(Node* root, int data) {
    if (root == NULL)
        return root;

    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else {
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Inorder traversal
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Compare operations by time (simple sort)
void sortOperations() {
    for (int i = 0; i < opCount - 1; i++) {
        for (int j = i + 1; j < opCount; j++) {
            if (ops[i].time > ops[j].time) {
                Operation temp = ops[i];
                ops[i] = ops[j];
                ops[j] = temp;
            }
        }
    }
}

// Rebuild tree based on operations
Node* buildTree() {
    Node* root = NULL;

    sortOperations();

    for (int i = 0; i < opCount; i++) {
        if (ops[i].type == INSERT)
            root = insert(root, ops[i].value);
        else if (ops[i].type == DELETE)
            root = deleteNode(root, ops[i].value);
    }

    return root;
}

// Add operation
void addOperation(int type, int value, int time) {
    ops[opCount].type = type;
    ops[opCount].value = value;
    ops[opCount].time = time;
    opCount++;
}

// Main
int main() {
    int choice, val, time;
    Node* root = NULL;

    while (1) {
        printf("\n1.Insert\n2.Delete\n3.Show Tree\n4.Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value and time: ");
            scanf("%d %d", &val, &time);
            addOperation(INSERT, val, time);
            break;

        case 2:
            printf("Enter value and time: ");
            scanf("%d %d", &val, &time);
            addOperation(DELETE, val, time);
            break;

        case 3:
            root = buildTree();
            printf("Current Tree (Inorder): ");
            inorder(root);
            printf("\n");
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}