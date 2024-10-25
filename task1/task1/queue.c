#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

typedef struct Element {
    int front;
    struct Element* back;
}Element;

struct Queue {
    Element *head, *tail;
};

void createQueue(Queue* queue) {
    queue->head = NULL;
    queue->tail = NULL;
}

void Enqueue(Queue* queue, int front) {
    if ((queue->tail == NULL) && (queue->head == NULL)) {
        queue
    }
    /*Element* element = malloc(sizeof(Element));
    element->front = front;
    element->back = queue->head;
    queue->head = element;*/
}

void Dequeue(Queue* stack) {

}