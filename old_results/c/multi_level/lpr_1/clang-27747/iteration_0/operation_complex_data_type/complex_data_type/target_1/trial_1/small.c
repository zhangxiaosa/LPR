#include <stdio.h>

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c j = {24, 0, 0, 0, 0};

int main() {
  j = j;
}
