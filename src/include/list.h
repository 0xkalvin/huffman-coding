#include <stdio.h> 
#include <stdlib.h> 

typedef struct Node {

    int frequency;
    char letter;
    struct Node* next;

} Node;


typedef struct List {
    Node* head;

} List;



Node* createNode(char c);


List* createList();
void insert(List *l, char c);
void print(List *l);
