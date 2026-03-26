#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define HASH_SIZE 100

// Simple hash function (for demo)
void simpleHash(char *input, char *output) {
    int sum = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        sum += input[i];
    }
    sprintf(output, "%d", sum);
}

// Structure for node
typedef struct Node {
    char hash[HASH_SIZE];
    struct Node *left;
    struct Node *right;
} Node;

// Create new node
Node* createNode(char *hash) {
    Node *node = (Node*)malloc(sizeof(Node));
    strcpy(node->hash, hash);
    node->left = node->right = NULL;
    return node;
}

// Build Merkle Tree
Node* buildMerkleTree(Node **leaves, int n) {
    if (n == 1)
        return leaves[0];

    Node *parents[MAX];
    int count = 0;

    for (int i = 0; i < n; i += 2) {
        char combined[HASH_SIZE * 2];
        char newHash[HASH_SIZE];

        // If odd, duplicate last node
        if (i + 1 == n) {
            strcpy(combined, leaves[i]->hash);
            strcat(combined, leaves[i]->hash);
        } else {
            strcpy(combined, leaves[i]->hash);
            strcat(combined, leaves[i + 1]->hash);
        }

        simpleHash(combined, newHash);

        Node *parent = createNode(newHash);
        parent->left = leaves[i];

        if (i + 1 < n)
            parent->right = leaves[i + 1];
        else
            parent->right = leaves[i];

        parents[count++] = parent;
    }

    return buildMerkleTree(parents, count);
}

// Display tree (preorder)
void display(Node *root) {
    if (root == NULL) return;

    printf("%s ", root->hash);
    display(root->left);
    display(root->right);
}

// Main function
int main() {
    int n;
    char data[MAX][HASH_SIZE];

    printf("Enter number of data blocks: ");
    scanf("%d", &n);

    Node *leaves[MAX];

    // Input data
    for (int i = 0; i < n; i++) {
        printf("Enter data %d: ", i + 1);
        scanf("%s", data[i]);

        char hash[HASH_SIZE];
        simpleHash(data[i], hash);

        leaves[i] = createNode(hash);
    }

    // Build tree
    Node *root = buildMerkleTree(leaves, n);

    printf("\nMerkle Root: %s\n", root->hash);

    printf("Merkle Tree (Preorder): ");
    display(root);

    return 0;
}