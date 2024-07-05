#include <stdio.h>

struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};

  l.d = j.e;

  int n = j.h && l.d;

  int temp1 = l.f && l.d;
  int temp2 = -(temp1);
  int temp3 = temp2 - n;

  i.g = l.d | temp3;

  return 0;
}