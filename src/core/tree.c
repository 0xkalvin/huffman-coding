#include "../include/tree.h"


Tree* createTree(){

    Tree* newTree = (Tree*)malloc(sizeof(Tree));

    if(newTree == NULL)    return NULL;

    newTree->root = NULL;

    return newTree;
}

void setChar(Node* n, char c){
    n->letter = c;
}

void setSubtrees(Node* root, Node* left, Node* right){
    root->left = left;
    root->right = right;
}
