#include "../include/node.h"


Node* createNode(){

    Node* newNode = (Node*)malloc(sizeof(Node));

    if(newNode == NULL)    return NULL;

    newNode->frequency = 0;
    newNode->letter = '*';
    newNode->next = newNode->right = newNode->left = NULL;

    return newNode;
}