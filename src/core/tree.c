#include "../include/tree.h"

/*  Método que cria a árvore de huffman   */
Node* createTree(Node** frequency){

    /* Nós auxiliares */
    Node* left;
    Node* right;
    Node* parent;

    /*  Cria duas filas
        A primeira será usada para armazenar os nós em ordem crescente pela frequência 
        A segunda será onde armazenaremos a árvore resultado em si */
    Queue* firstQueue = createQueue(26);
    Queue* secondQueue = createQueue(26);

    /*  Insere na primeira fila os nós com a frequência de cada letra em ordem crescente    */
    for(int i = 0; i < 26; i++){
        if(frequency[i]->counter > 0){
            Node* current = createNode();
            current->letter = frequency[i]->letter;
            current->counter = frequency[i]->counter;
            enqueue(firstQueue, current);
        }
    }

    /*  Enquanto a primeira fila não estiver vazia, monta a árvore de baixo para cima,
        pegando os dois nós com menores frequências e construindo um nó pai para eles.   */
    while(!(isEmpty(firstQueue) && isSizedOne(secondQueue))){

        left = minNode(firstQueue, secondQueue);
        right = minNode(firstQueue, secondQueue);

        parent = createNode();
        parent->left = left;
        parent->right = right;
        parent->counter = right->counter + left->counter;
        enqueue(secondQueue, parent);

    }

    return dequeue(secondQueue);

}

/*  Método que retorna a altura da árvore   */
int getHeight(Node* tree){

    if (tree == NULL)
        return 0;
    else
    {
        if (getHeight(tree->left) > getHeight(tree->right))
            return 1 + getHeight(tree->left);
        else
            return 1 + getHeight(tree->right);
    }


}

/*  Método para printar códigos de Huffman.
    Percorre a árvore, atribuindo 0 para esquerda e 1 para direita, 
    salvando cada passo em um vetor `code`  */
void printHuffmanTable(Node* tree, int code[], int position)
{
    if(tree->left != NULL){
        code[position] = 0;
        printHuffmanTable(tree->left, code, position + 1);
    }

    if(tree->right != NULL){
        code[position] = 1;
        printHuffmanTable(tree->right, code, position + 1);
    }

    if(isLeaf(tree)){
        printf(" %c             ", tree->letter);
        printf("%d           ", tree->counter);
        
        for(int i = 0; i < position; i++){
            printf("%d", code[i]);
        }
        
        printf("\n");
    }

}

