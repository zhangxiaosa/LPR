#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned j;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};

int main() {
  struct p a = {8L, 666};
  
  v[0] = w; // Assignment optimized
  
  j = w.q; // Assignment optimized

  return 0;
}