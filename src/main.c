#include "./include/helpers.h"


const char* readFile();




int main(void){

    const char* text = readFile();
    
    // printf(" %s \n" , text);

    List* frequency = getFrequency(text);

    printList(frequency);

    return 0;
}




const char* readFile(){
    FILE* file = fopen("./data.txt","r");
    if(file == NULL)
    {
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    
    long int size = ftell(file);
    
    rewind(file);

    char* content = calloc(size + 1, 1);

    fread(content,1,size,file);

    return content;
}