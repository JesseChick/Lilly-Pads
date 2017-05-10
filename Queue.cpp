#include <assert.h>
#include "Queue.h"

Queue::Queue() {
  front = NULL;
  back = NULL;
  size = 0;
}

// F -> o -> ... -> o -> B

void Queue::enqueue(int moveCode) {
  if (size == 0) {
    front = new Move;
    back = front;
  } else {
    back->next = new Move;
    back = back->next;
  }
  size++;
  back->pos = (moveCode < 0 ? -1 * moveCode : moveCode);
  back->dir = (moveCode < 0 ? -1 : 1);
}

void Queue::dequeue() {
  assert(size > 0);
  assert(back != NULL);

  delete back;
  back = NULL;
  size--;
  if (front == NULL) return;

  Move *temp = front;
  while (temp->next != NULL)
    temp = temp->next;
  back = temp;
}

void Queue::print() {
  return;
}
