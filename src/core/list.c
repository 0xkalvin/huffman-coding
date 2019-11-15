#include "../include/list.h"

List* createList(){

    List* l = (List*)malloc(sizeof(List));

    if(l == NULL)   return NULL;

    l->head = NULL;

    return l;
}


void insertInList(List *l, char c){
    
    if(l->head == NULL){
        l->head = createNode();
        l->head->counter++;
        return;
    }
    else{
        Node *temp = l->head;

        while (temp->next != NULL && temp->letter != c){
            temp = temp->next;
        }

        if(temp->letter == c){
            temp->counter++;
        }
        else{
            temp->next = createNode();
            temp->next->counter++;
        }
    }
}

void printList(List *l){

    Node* temp = l->head;

    while(temp != NULL){
        printf(" %c -> %d \n", temp->letter, temp->counter);
        temp = temp->next;
    }
}
