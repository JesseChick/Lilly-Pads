#ifndef __QUEUE_H
#define __QUEUE_H

#include "Structs.h"

class Queue {
public:
  Queue();
  ~Queue();
  void enqueue(int);
  void dequeue();
  void print();
private:
  Move* front;
  Move* back;
  int size;
};

#endif
