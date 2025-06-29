#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 10

struct Deque {
    int items[MAX_SIZE];
    int front;
    int rear;
};

void initialize(struct Deque *dq) {
    dq->front = -1;
    dq->rear = -1;
}

int isFull(struct Deque *dq) {
    return ((dq->front == 0 && dq->rear == MAX_SIZE - 1) || (dq->front == dq->rear + 1));
}

int isEmpty(struct Deque *dq) {
    return (dq->front == -1);
}

void enqueueFront(struct Deque *dq, int value) {
    if (isFull(dq)) {
        printf("\nDeque is full");
        return;
    }
    if(isEmpty(dq)) {
        dq->front = dq->rear = 0;
    } else if(dq->front == 0) {
        dq->front = MAX_SIZE - 1;
    } else {
        dq->front--;
    }
    dq->items[dq->front] = value;
}

void enqueueRear(struct Deque *dq, int value) {
    if (isFull(dq)) {
        printf("\nDeque is full");
        return;
    }
    if(isEmpty(dq)) {
        dq->front = dq->rear = 0;
    } else if(dq->rear == MAX_SIZE - 1) {
        dq->rear = 0;
    } else {
        dq->rear++;
    }
    dq->items[dq->rear] = value;
}

void dequeueFront(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("\nDeque is empty");
        return;
    }
    printf("\nDequeued from front: %d", dq->items[dq->front]);
    
    if(dq->front == dq->rear) dq->front = dq->rear = -1;
    else if (dq->front == MAX_SIZE - 1) dq->front = 0;
    else dq->front++;
}

void dequeueRear(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("\nDeque is empty");
        return;
    }
    printf("\nDequeued from rear: %d", dq->items[dq->rear]);
    
    if(dq->front == dq->rear) dq->front = dq->rear = -1;
    else if (dq->rear == 0) dq->rear = MAX_SIZE - 1;
    else dq->rear--;
}

int peekFront(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("\nDeque is empty");
        return -1;
    }
    return dq->items[dq->front];
}

int peekRear(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("\nDeque is empty");
        return -1;
    }
    return dq->items[dq->rear];
}

void display(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("\nDeque is empty");
        return;
    }

    printf("\nDeque elements are: ");
    int i = dq->front;
    while(1) {
        printf("%d, ", dq->items[i]);
        if (i == dq->rear) break;
        i = (i+1) % MAX_SIZE;
    }
    printf("\n");
}

int main() {
    struct Deque dq;
    initialize(&dq);

    enqueueFront(&dq, 10);
    enqueueFront(&dq, 20);
    enqueueFront(&dq, 30);
    // display(&dq);

    // printf("\nPeek Front: %d", peekFront(&dq));
    // printf("\nPeek Rear: %d", peekRear(&dq));

    enqueueRear(&dq, 1);
    enqueueRear(&dq, 2);
    enqueueRear(&dq, 3);
    display(&dq);

    dequeueFront(&dq);
    dequeueFront(&dq);
    dequeueRear(&dq);
    display(&dq);

    return 0;
}