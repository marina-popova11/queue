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

int Enqueue(Queue* queue, int front) {
    /*if ((queue->tail == NULL) && (queue->head == NULL)) {
        queue->tail = createQueue(front);
        queue->head = queue->tail;
    } else {
        queue->tail = Enqueue(queue->tail, front);
    }*/
    Element* element = malloc(sizeof(Element));
    if (element == NULL) {
        return 1;
    }

    element->front = front;
    element->back = queue->tail;
    queue->head = element;
}

void Dequeue(Queue* queue) {

}