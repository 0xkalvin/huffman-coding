#include "../include/helpers.h"

int comparator(const void *a, const void *b)
{
    const Node* const * elem1 = a;
    const Node* const * elem2 = b;

    return (*elem1)->counter - (*elem2)->counter; 
     
}

Node **getFrequency(const char *text)
{

    Node **frequency = (Node **)malloc(26 * sizeof(Node *));

    for (int i = 0; i < 26; i++)
        frequency[i] = createNode();

    int size = strlen(text);

    for (int i = 0; i < size; i++)
    {
        if (text[i] != ' ')
        {
            int indexLetter = tolower(text[i]) - 97;
            frequency[indexLetter]->counter++;
            frequency[indexLetter]->letter = tolower(text[i]);
        }
    }

    qsort(frequency, 26 , sizeof(struct Node *), comparator);

    return frequency;
}
