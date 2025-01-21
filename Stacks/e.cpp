#include <stdio.h>
#define MAX 5

int Queue[MAX];
int front = -1;
int rear = -1;
int size = 0;

void enqueue(int value) {
    if (size == MAX) {
        printf("Queue is full now\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        Queue[rear] = value;
        size++;
    }
}

void dequeue() {
    if (size == 0) {
        printf("Queue is empty now\n");
    } else {
        int value = Queue[front];
        front = (front + 1) % MAX;
        size--;
    }
}

void display() {
    if (size == 0) {
        printf("Queue is empty now\n");
    } else {
        int i = front;
        for (int count = 0; count < size; count++) {
            printf("%d ", Queue[i]);
            i = (i + 1) % MAX;
        }
        printf("\n");
    }
}

int main() {
    printf("Elements on the Queue:\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    display();

    return 0;
}