#include <stdio.h>

typedef int b;

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
  
  // Decomposed variables
  b m = j.e;
  signed d = l.d;
  unsigned e = l.e;
  unsigned f = l.f;
  signed g = l.g;
  signed h = l.h;
  
  d = m;
  
  b n = h && d;
  b o = d;
  
  signed p = o | -(f && d) - n;
  
  i.g = p;
}