#include "../include/helpers.h"


List* getFrequency(const char* text){


    List* frequencyList = createList();

    int size = strlen(text);


    for(int i = 0; i < size; i++){
        if(text[i] != ' '){
            insertInList(frequencyList, tolower(text[i]));
        }
    }

    return frequencyList;

}