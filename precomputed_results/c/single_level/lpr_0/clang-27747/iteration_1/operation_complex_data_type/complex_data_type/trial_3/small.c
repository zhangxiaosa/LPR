#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  signed p = l.d | -(l.f && l.d) - n;
  i.g = p;
  
  // Display the values
  printf("l.d: %d\n", l.d);
  printf("l.e: %u\n", l.e);
  printf("l.f: %u\n", l.f);
  printf("l.g: %d\n", l.g);
  printf("l.h: %d\n", l.h);
  
  printf("i.g: %d\n", i.g);
  
  return 0;
}