#include <iostream>

typedef short b;
typedef int c;
typedef unsigned short e;
typedef unsigned f;

c g;
c h;

f fn4(c p1, e p2, e p3, f p4, e p5) {
  b ak[8];

  // Unrolled loop iteration 1
  if (ak[p3]) {
    return g;
  }

  // Unrolled loop iteration 2
  p4 += 1;
  if (ak[p3]) {
    return g;
  }

  // Unrolled loop iteration 3
  p4 += 1;
  if (ak[p3]) {
    return g;
  }

  // Unrolled loop iteration 4
  p4 += 1;
  if (ak[p3]) {
    return g;
  }

  // Unrolled loop iteration 5
  p4 += 1;
  if (ak[p3]) {
    return g;
  }

  // Unrolled loop iteration 6
  p4 += 1;
  if (ak[p3]) {
    return g;
  }

  // Unrolled loop iteration 7
  p4 += 1;
  if (ak[p3]) {
    return g;
  }

  // Unrolled loop iteration 8
  p4 += 1;
  if (ak[p3]) {
    return g;
  }

  return g;
}

c fn5() {
  f o = 0x5A683F60L;
  c ad = -7L;
  if (fn4(ad, 4294967287UL, ad, g, g))
    ;
  return o;
}

int main() {
  fn5();
}