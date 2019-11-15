#include "../include/node.h"

/*  Método para criar um novo nó, alocando memória e inicializando valores */
Node* createNode(){

    Node* newNode = (Node*)malloc(sizeof(Node));

    if(newNode == NULL)    return NULL;

    newNode->counter = 0;
    newNode->letter = '*';
    newNode->right = newNode->left = NULL;

    return newNode;
}

/*  Método que verifica se o nó é uma folha, ou seja, não tem filhos    */
int isLeaf(Node* n){
    return n->left == NULL && n->right == NULL;
}
