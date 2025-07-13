#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
    node* prev;
    int data;
    node* next;
};

node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));

    if (newNode == NULL) {
        printf("\nMemory allocation failed!\n");
        return NULL;
    }
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void insertAtFront(node** head, int value) {
    node* newNode = createNode(value);

    if(*head != NULL) {
        newNode->next = *head;
        (*head)->prev = newNode;
    }
    *head = newNode;
}

void insertAtEnd(node** head, int value) {
    node* newNode = createNode(value);
    
    if(*head == NULL) {
        *head = newNode;
    } else {
        node* temp = *head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void insertAtPosition(node** head, int value, int position) {
    //
}

void printList(node* head) {
    printf("\nList > \tNULL <-> ");
    while(head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n\n");
}

void printListAdd(node* head) {
    printf("\nList > \tNULL <-> ");
    while(head != NULL) {
        printf("([%u], %u, %d, %u) <-> ", head, head->prev, head->data, head->next);
        head = head->next;
    }
    printf("NULL\n\n");
}

int main() {
    node* head = NULL;

    // insertAtFront(&head, 3);
    // insertAtFront(&head, 6);
    // insertAtFront(&head, 9);

    insertAtEnd(&head, 100);
    insertAtEnd(&head, 101);
    insertAtEnd(&head, 110);

    printList(head);
    // printListAdd(head);

    return 0;
}