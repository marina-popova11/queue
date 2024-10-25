#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

typedef struct Element {
    int value;
    struct Element* next;
}Element;

struct Queue {
    Element *front, *back;
};

Queue* createQueue() {
    Queue* ptr = calloc(1, sizeof(Queue));
    return ptr;
}

void Enqueue(Queue* queue, int value) {
    Element* element = malloc(sizeof(Element));
    /*if (element == NULL) {
        return 1;
    }*/

    element->value = value;
    element->next = NULL;
    queue->back = element;
    queue->back->next = element;

}

//int Dequeue(Queue* queue) {
//    Element* ptr = queue->front;
//
//}