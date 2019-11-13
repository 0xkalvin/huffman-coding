#ifndef TREE_H
#define TREE_H
#include <stdio.h> 
#include <stdlib.h> 
#include "node.h"

typedef struct Tree {
    Node* root;

} Tree;



Tree* createTree();
void setChar(Node* n, char c);
void setSubtrees(Node* root,Node* left, Node* right);


#endif