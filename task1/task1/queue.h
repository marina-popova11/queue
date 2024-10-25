#pragma once

typedef struct Element Element;

typedef struct Queue Queue;

void Enqueue(Queue* stack, int value);

void Dequeue(Queue* stack);

void createQueue(Queue* queue);