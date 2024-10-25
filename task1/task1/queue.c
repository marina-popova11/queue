#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

typedef struct Element {
    int value;
    struct Element* next;
}Element;

struct Queue {
    Element* head;
};

Queue* createStack() {
    Queue* ptr = calloc(1, sizeof(Queue));
    return ptr;
}

void Enqueue(Queue* stack, int value) {

}

void Dequeue(Queue* stack) {

}