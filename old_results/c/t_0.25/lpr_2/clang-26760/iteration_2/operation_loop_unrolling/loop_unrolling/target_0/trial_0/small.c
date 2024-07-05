#include <iostream>

unsigned f;
signed g;

int main() {
  int j = 0x24F96B7B;
  signed n = g;
  int o = n;
  unsigned p = o;

  while (p) {
    j -= 4;
    p = j;
  }
}