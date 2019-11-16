#include "./include/helpers.h"
#include <stdio.h>
#include <stdlib.h>

const char* textFileToString();


int main(void){

    /*  Copia texto de um arquivo txt para uma string   */
    const char* text = textFileToString();

    /*  Conta a frequência de cada caracter no texto    */
    Node** frequency = getFrequency(text);

    /*  Contrói a árvore de huffman */
    Node* huffmanTree = createTree(frequency);

    /*  Usa altura da árvore para saber quanto de memória precisa alocar para os códigos  */
    int treeHeight = getHeight(huffmanTree);
    int code[treeHeight];

	printf("\n\tAlgoritmo de Huffman \n\n");
	printf("Codificação sendo feita para o texto: \n\n%s \n\n", text);
    
    printf("Caractér    Frequência    código \n");
    printHuffmanTable(huffmanTree, code, 0);

    return 0;
}

	
/*  Método que captura texto de um arquivo txt e grava em uma string    */
const char* textFileToString(){
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