
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

int main() {
  struct c i;
  int m = i.e;
  int n = i.h && i.d;
  int p = i.d | -(i.d && i.d) - n;
  i.g = p;
}
