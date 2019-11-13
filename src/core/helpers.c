#include "../include/helpers.h"


Node** getFrequency(const char* text){


    Node** frequency = (Node**)malloc(26 * sizeof(Node*));

    for(int i = 0; i < 26; i++) frequency[i] = createNode();

    int size = strlen(text);

    for(int i = 0; i < size; i++){
        if(text[i] != ' '){
            int current = tolower(text[i]) - 97;
            frequency[current]->frequency++;
            frequency[current]->letter = tolower(text[i]);
        }
    }

    return frequency;

}


