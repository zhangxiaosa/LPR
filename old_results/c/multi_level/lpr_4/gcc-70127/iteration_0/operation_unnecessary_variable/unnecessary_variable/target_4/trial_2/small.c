#include <stdio.h>

unsigned u;
struct p {
  int ab;
};

struct p v[1];
struct p w = {0x1C87E74F};

int main() {
  struct p a = {0x1C87E74F};

  while (1) {
    a = v[0] = w;
    v[0] = a;
  }

  return 0;
}