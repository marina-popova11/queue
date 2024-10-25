#pragma once

typedef struct Element Element;

typedef struct Queue Queue;

void Enqueue(Queue* stack, int value);

//int Dequeue(Queue* stack);

Queue* createQueue();