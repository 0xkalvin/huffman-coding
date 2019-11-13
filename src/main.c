#include "./include/helpers.h"


const char* readFile();


/*  
    https://www.geeksforgeeks.org/efficient-huffman-coding-for-sorted-input-greedy-algo-4/
*/

int main(void){

    const char* text = readFile();

    Node** frequency = getFrequency(text);

    for(int i = 0; i < 26; i++){
        printf("%c -> %d \n", frequency[i]->letter, frequency[i]->frequency);
    }

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