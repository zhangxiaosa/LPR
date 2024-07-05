
#include <stdio.h>

#define DATA_WIDTH 18

struct c {
  int d : DATA_WIDTH;
  int e;
  int g;
  int h;
};

int main() {
  struct c i;
  int m = i.e;
  i.d = m;
  int n = i.h && i.d;
  int p = i.d | -(i.d && i.d) - n;
  i.g = p;
  return 0;
}

