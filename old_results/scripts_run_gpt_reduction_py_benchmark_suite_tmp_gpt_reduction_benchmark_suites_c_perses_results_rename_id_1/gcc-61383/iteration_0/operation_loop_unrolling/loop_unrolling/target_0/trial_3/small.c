#include <stdio.h>
typedef signed a;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn1(a p1, a p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

f m;
d n;
a o;
c q;

void loopBody() {
  c ab;
  if (0x4F92 < (ab = fn1(o, o), 6))
    ;
  else {
    a ac = 0xE3;
    if (o <= ac)
      ;
    else if (ab)
      break;
  }
}
e fn5(p1) {
  loopBody();  // iteration 1
  loopBody();  // iteration 2
  loopBody();  // iteration 3
  loopBody();  // iteration 4

  return m;
}

e fn6() {
  if (fn5(o))
    ;
  return q;
}

int main() {
  fn6();
}