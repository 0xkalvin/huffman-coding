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
Node* dequeue(Queue* q);
int isFull(Queue* q);
int isEmpty(Queue* q);
Node* getFront(Queue* q);
void printQueue(Queue* q);
Node* minNode(Queue* q, Queue* z);
int isSizedOne(Queue* q);


#endif