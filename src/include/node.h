#ifndef NODE_H
#define NODE_H
#include <stdio.h> 
#include <stdlib.h> 


typedef struct Node { 
    char letter; 
    int frequency; 
    struct Node *left;
    struct Node *right; 
    struct Node *next; 
    
} Node; 
  


Node* createNode();


#endif