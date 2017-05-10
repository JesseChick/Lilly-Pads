// #include <iostream>
//
// using std::cout;
//
#include "Queue.h"

int main() {
  Queue q;

  for (int i=0; i<8; ++i)
    q.enqueue(i%2?i*-1:i);
  for (int i=0; i<8; ++i)
    q.dequeue();

  return 0;
}
