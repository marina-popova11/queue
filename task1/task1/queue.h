#pragma once

typedef struct Element Element;

typedef struct Queue Queue;

int Enqueue(Queue* stack, int value);

int Dequeue(Queue* stack);

void createQueue(Queue* queue);