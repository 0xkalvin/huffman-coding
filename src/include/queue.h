#ifndef QUEUE_H
#define QUEUE_H
#include <stdio.h> 
#include <stdlib.h> 
#include "node.h"



typedef struct Queue {
    int capacity;
    int front;
    int rear;
    Node** array;

} Queue;



Queue* createQueue(int capacity);
void enqueue(Queue* q, Node* n);
void dequeue(Queue* q);
int isFull(Queue* q);
int isEmpty(Queue* q);


#endif