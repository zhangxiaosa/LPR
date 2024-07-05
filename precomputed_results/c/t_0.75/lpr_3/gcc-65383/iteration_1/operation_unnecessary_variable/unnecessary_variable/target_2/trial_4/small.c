#include <stdio.h>

unsigned g;
int h2 = 2453191021;

unsigned fn2() {
  for (;;) {
    if (h2)
      return 195;
    g = 0; // Replace with a constant value
  }
}

int main() {
  fn2();
}
