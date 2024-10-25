#pragma once

typedef struct Element Element;

typedef struct Queue Queue;

void Enqueue(Queue* stack, int value);

void Dequeue(Queue* stack);

Queue* createStack();