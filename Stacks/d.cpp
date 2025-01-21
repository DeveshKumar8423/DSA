#include<stdio.h>
#define MAX 5

int Queue[MAX];
int front = -1;
int rear = -1;
int size = 0;

void enqueue(int value){
    if(size==MAX){
        printf("Queue is full now");
    }
    else{
        if(front==-1){
            front=front+1;
            rear++;
        }
        Queue[rear] = value;
        size++;
    }
}

void dequeue(){
    if(size==0){
        printf("Queue is empty now");
        return -1;
    }
    else{
        int value = Queue[front];
        front = front+1;
        return value;
    }
}

void display(){
    if(size==0){
        printf("Queue is empty now");
        return -1;
    }
    else{
        int i = Queue[front];
        for(int count = 0 ; count<size ; count++){
            printf("%d" , Queue[i]);
            i = i+1;
        }
    }
}

main(){
    printf("Elements on the Queue");
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
