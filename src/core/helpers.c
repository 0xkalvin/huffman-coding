#include "../include/helpers.h"

/*  Método para ordenar vetor de Nodes de acordo com a váriavel counter, em ordem crescente */
int comparator(const void *a, const void *b)
{
    const Node* const * elem1 = a;
    const Node* const * elem2 = b;

    return (*elem1)->counter - (*elem2)->counter; 
     
}

/*  Método para contar a frequência de cada caracter no texto informado.
    Considerando apenas letras de A-Z, e salvando todas em lowercase.
    Retorna o vetor ordenado pela frequência, em ordem crescente.    */
Node **getFrequency(const char *text)
{

    Node **frequency = (Node **)malloc(26 * sizeof(Node *));

    for (int i = 0; i < 26; i++)
        frequency[i] = createNode();

    int size = strlen(text);

    for (int i = 0; i < size; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            int indexLetter = tolower(text[i]) - 97;
            frequency[indexLetter]->counter++;
            frequency[indexLetter]->letter = tolower(text[i]);
        }
    }

    qsort(frequency, 26 , sizeof(struct Node *), comparator);

    return frequency;
}
