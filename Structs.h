#ifndef __STRUCTS_H
#define __STRUCTS_H

struct Move {
  int pos;
  int dir;
  Move* next;
};

#endif
