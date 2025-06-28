#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 10

struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

void enque(struct Queue *q, int value) {
    if(q->rear == MAX_SIZE - 1) printf("\nQueue is full");
    else {
        if (q->front == -1) q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
    }
}

void display(struct Queue *q) {
    if(q->rear == -1) printf("\nQueue is empty");
    else {
        printf("\nQueue elements are: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d, ", q->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue q;
    q.front = q.rear = -1;

    display(&q);
    enque(&q, 10);
    enque(&q, 20);
    enque(&q, 30);
    enque(&q, 40);
    enque(&q, 50);
    display(&q);

    return 0;
}