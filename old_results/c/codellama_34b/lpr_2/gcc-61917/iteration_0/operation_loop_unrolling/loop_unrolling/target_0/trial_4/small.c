
#include <iostream>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

c k;
e l;
volatile f m[5][8];

d fn3(p1) {
  a o;
  p1 = o - p1;
  return p1;
}

int main() {
  fn3(10);
  return 0;
}
