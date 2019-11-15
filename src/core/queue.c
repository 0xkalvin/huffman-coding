#include "../include/queue.h"

/*  Método que cria uma fila com uma certa capacidade passada   */
Queue* createQueue(int capacity){

    Queue* newQueue = (Queue*)malloc(sizeof(Queue));
    
    newQueue->capacity = capacity;
    newQueue->front = newQueue->rear = -1;
    newQueue->array = (Node**)malloc(capacity * sizeof(Node*));

    return newQueue;
}

/*  Método que insere novo nó no final da fila  */
void enqueue(Queue* q, Node* n)
{
	
	if(isFull(q))
	{
		return;
	}
	q->array[++q->rear] = n;
	
    if(q->front==-1)
	{

		++q->front;
    }

}

/*  Método para desenfileirar, retornando o primeiro elemento da fila  */
Node* dequeue(Queue* q){

    if(isEmpty(q)){
        return NULL;
    }

    Node* temp = q->array[q->front];

    if(q->front == q->rear){
        q->front = q->rear = -1;
    }
    else {
        ++q->front;
    }   

    return temp;
}

/*  Método para verificar se a fila está cheia  */
int isFull(Queue* q){
    return q->rear == q->capacity - 1;
}

/*  Método para verificar se a fila está vazia  */
int isEmpty(Queue* q){
    return q->front == -1;
}

/*  Método para retornar o primeiro nó da fila */
Node* getFront(Queue* q){

    if(isEmpty(q))  return NULL;

    return q->array[q->front];
}

/*  Método para printar a fila */
void printQueue(Queue* q){

    if(isEmpty(q)){
        return;
    }

    for(int i = q->front; i <= q->rear; i++){

        printf(" %d ", q->array[i]->counter);

    }
    
}

/*  Método que retorna o menor nó de duas filas. Caso uma fila esteja vazia, retorna da que não está */
Node* minNode(Queue* first, Queue* second)
{
	if (isEmpty(first))
	{
		return dequeue(second);
	}

	if (isEmpty(second))
	{
		return dequeue(first);
    }

	if(getFront(first)-> counter < getFront(second)-> counter )
	{
		return dequeue(first);
	}

    return dequeue(second);
}


/*  Método para verificar se a fila tem apenas um elemento */
int isSizedOne(Queue* q){
    return q->front == q->rear && q->front != -1;
}