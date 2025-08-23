#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;

struct Node {
    int data;
    node* left;
    node* right;
};

node* createNode(int value) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insert(node** root, int data) {
    if(*root == NULL) {
        *root = createNode(data);
    } else if(data < (*root)->data) {
        insert(&((*root)->left), data);
    } else if (data > (*root)->data) {
        insert(&((*root)->right), data);
    }
}

node* search(node* root, int value) {
    if (root == NULL || root->data == value) return root;

    if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

void inorder(node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void printTree(node* root, int space) {
    if (root == NULL) {
        return;
    }
    space += 4;
    printTree(root->right, space);
    for (int i = 4; i < space; i++) {
        printf(" ");
    }
    printf("%d\n", root->data);
    printTree(root->left, space);
}

int main() {
    node* root = NULL;

    insert(&root, 8);
    insert(&root, 3);
    insert(&root, 10);
    insert(&root, 1);
    insert(&root, 6);
    insert(&root, 14);
    insert(&root, 4);
    insert(&root, 7);
    insert(&root, 13);

    printTree(root, 0);
    
    // inorder(root);
    // preorder(root);
    // postorder(root);
    int data;
    printf("\nEnter value to search: ");
    scanf("%d", &data);

    if (search(root, data) != NULL) {
        printf("\nKey %d exist in the tree.", data);
    } else {
        printf("\nKey %d doesn't exist in the tree.", data);
    }

    return 0;
}