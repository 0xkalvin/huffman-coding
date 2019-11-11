#include "../include/list.h"

Node* createNode(char c){

    Node* newNode = (Node*)malloc(sizeof(Node));

    if(newNode == NULL)   return NULL;

    newNode->letter = c;
    newNode->frequency = 1;
    newNode->next = NULL;

    return newNode;

}


List* createList(){

    List* l = (List*)malloc(sizeof(List));

    if(l == NULL)   return NULL;

    l->head = NULL;

    return l;
}


void insertInList(List *l, char c){
    
    if(l->head == NULL){
        l->head = createNode(c);
        return;
    }
    else{
        Node *temp = l->head;

        while (temp->next != NULL && temp->letter != c){
            temp = temp->next;
        }

        if(temp->letter == c){
            temp->frequency++;
        }
        else{
            temp->next = createNode(c);
        }
    }
}

void printList(List *l){

    Node* temp = l->head;

    while(temp != NULL){
        printf(" %c -> %d \n", temp->letter, temp->frequency);
        temp = temp->next;
    }
}
