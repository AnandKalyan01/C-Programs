#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int number;
    struct node *left;
    struct node *right;
} node;

int insert(node **tree, int number);
bool search(node *tree, int number);
void print(node *tree);
void free_memory(node *tree);

int main() {
    node *root = NULL;
    insert(&root, 50);
    insert(&root, 40);
    insert(&root, 60);

    printf("Tree elements: ");
    print(root);
    printf("\n");

    // Searching for a value in the tree
    int target = 40;
    if (search(root, target)) {
        printf("%d found\n", target);  // Use 'printf' for formatted output
    } else {
        printf("%d not found\n", target);
    }

    free_memory(root);
    return 0;
}

int insert(node **tree, int number) {
    if (*tree == NULL) {
        // create new node to assign
        *tree = (node *)malloc(sizeof(node));
        (*tree)->number = number;
        (*tree)->left = NULL;
        (*tree)->right = NULL;
    } else if (number < (*tree)->number) {
        insert(&(*tree)->left, number);
    } else if (number > (*tree)->number) {
        insert(&(*tree)->right, number);
    } else {
        return 1;  // Duplicate value, not inserted
    }
    return 0;
}

bool search(node *tree, int number) {
    if (tree == NULL) {
        return false;
    } else if (number < tree->number) {
        return search(tree->left, number);
    } else if (number > tree->number) {
        return search(tree->right, number);
    } else {
        return true;
    }
}

void print(node *tree) {
    if (tree != NULL) {
        print(tree->left);
        printf("%d ", tree->number);
        print(tree->right);
    }
}

void free_memory(node *tree) {
    if(tree != NULL) {
        free_memory(tree->left);
        free_memory(tree->right);
        free(tree);
    }
}
