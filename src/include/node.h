#ifndef NODE_H
#define NODE_H
#include <stdio.h> 
#include <stdlib.h> 


typedef struct Node { 
    char letter; 
    int counter; 
    struct Node *left;
    struct Node *right; 
    
} Node; 
  


Node* createNode();
int isLeaf(Node* n);



#endif