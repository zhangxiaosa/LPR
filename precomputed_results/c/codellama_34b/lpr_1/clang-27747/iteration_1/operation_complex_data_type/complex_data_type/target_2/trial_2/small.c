
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
  i.d = m;
  int n = i.h && i.d;
  int a = i.d & i.d;
  int b = i.d | i.d;
  int c = a | b;
  int d = -c;
  int e = n & c;
  int f = e | d;
  i.g = f;
}
