#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

int main(void) {
    Queue* queue = createQueue();
    Enqueue(queue, 1);
    return 0;
}