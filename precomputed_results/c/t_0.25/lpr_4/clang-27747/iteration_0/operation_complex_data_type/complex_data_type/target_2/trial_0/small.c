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
  j.e = i.g;
  int n = j.h && j.e;
  int o = j.e;
  signed int p = o | -(j.f && j.e) - n;
  i.g = p;
}
