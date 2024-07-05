
#include <stdio.h>

struct c {
  int d : 18;
};

int main() {
  struct c i, j;
  int n = j.d && i.d;
  int p = i.d | -(i.d && i.d) - n;
  return p;
}
