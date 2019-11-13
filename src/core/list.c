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
        l->head->frequency++;
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
            temp->next = createNode();
            temp->next->frequency++;
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
