#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
    int data;
    node* next;
};

node* createNode(int value) {
    node* newNode = (node*)malloc(sizeof(node));

    if (newNode == NULL) {
        printf("\nMemory allocation failed!\n");
        return NULL;
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(node** head, int value) {
    node* newNode = createNode(value);
    if(*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        *head = newNode;
    }
}

void insertAtEnd(node** head, int value) {
    node* newNode = createNode(value);
    if(*head == NULL) {
        *head = newNode;
    } else {
        node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printList(node* head) {
    printf("\nList ==> ");
    while(head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void printReverseList(node* head) {
    if (head == NULL) return;
    printReverseList(head->next);
    printf("%d -> ", head->data);
}

int main() {
    node* head = NULL;

    // insertAtBeginning(&head, 10);
    // insertAtBeginning(&head, 20);
    // insertAtBeginning(&head, 30);
    // insertAtBeginning(&head, 40);
    // insertAtBeginning(&head, 50);
    // insertAtBeginning(&head, 60);

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);
    insertAtEnd(&head, 60);

    printList(head);

    // printf("\nReversed List ==> ");
    // printReverseList(head);
    // printf("NULL\n");

    return 0;
}