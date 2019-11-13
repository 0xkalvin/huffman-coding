#ifndef LIST_H
#define LIST_H
#include <stdio.h> 
#include <stdlib.h> 
#include "node.h"

typedef struct List {
    Node* head;

} List;



List* createList();
void insertInList(List *l, char c);
void printList(List *l);

#endif