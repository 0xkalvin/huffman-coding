#include "../include/queue.h"


Queue* createQueue(int capacity){

    Queue* newQueue = (Queue*)malloc(sizeof(Queue));
    
    newQueue->capacity = capacity;
    newQueue->front = newQueue->rear = -1;
    newQueue->array = (Node**)malloc(capacity * sizeof(Node*));

    return newQueue;
}


void enqueue(Queue* q, Node* n){



}


void dequeue(Queue* q){



}


int isFull(Queue* q){
    return q->rear == q->capacity - 1;
}


int isEmpty(Queue* q){
    return q->front == -1;
}

Node* getFront(Queue* q){

    if(isEmpty(q))  return NULL;

    return q->array[q->front];
}