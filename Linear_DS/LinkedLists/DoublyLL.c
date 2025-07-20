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

int getLength(node* head) {
    int count = 0;
    while(head != NULL) {
        count++;
        head = head->next;
    }
    return count;
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
    if (head == NULL || position == 1) {
        insertAtFront(head, value);
    } else if((position < 0) || (getLength(*head) < position)) {
        printf("Insertion at %d position is not possible!", position);
    } else {
        node* newNode = createNode(value);
        node* temp = *head;
        for (int i = 1; i < position - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next->prev = newNode;
        newNode->prev = temp;
        temp->next = newNode;
    }
}

void deleteAtBeginning(node** head) {
    if (*head == NULL) {
        printf("\nList is already empty. Nothing to delete.\n");
    } else {
        node* temp = *head;
        *head = (*head)->next;

        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
    }
}

void deleteAtEnd(node** head) {
    if (*head == NULL) {
        printf("\nList is empty!");
    } else if((*head)->next == NULL) {
        deleteAtBeginning(head);
    } else {
        node* temp = *head;
        while(temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
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

    // insertAtPosition(&head, 999, 3);
    // deleteAtBeginning(&head);

    printList(head);
    // printListAdd(head);

    return 0;
}