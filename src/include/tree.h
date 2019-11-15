#ifndef TREE_H
#define TREE_H
#include <stdio.h> 
#include <stdlib.h> 
#include "node.h"
#include "queue.h"


Node* createTree(Node** frequency);
void printHuffmanTable(Node* tree, int code[], int position);
int getHeight(Node* tree);

#endif