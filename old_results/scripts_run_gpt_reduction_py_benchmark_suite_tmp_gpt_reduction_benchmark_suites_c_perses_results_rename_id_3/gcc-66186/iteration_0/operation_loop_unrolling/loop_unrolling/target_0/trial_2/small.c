typedef signed a;
typedef short b;
typedef int c;
typedef unsigned short e;
typedef unsigned f;
c g;
c h;
f fn4(c p1, e p2, e p3, f p4, e p5) {
  b ak[8];

  if (h < 0) {
    p4 = 0;
    if (ak[p3]) {
      // Unrolled iteration 1
    }
    p4 = 1;
    if (ak[p3]) {
      // Unrolled iteration 2
    }
    p4 = 2;
    if (ak[p3]) {
      // Unrolled iteration 3
    }
    p4 = 3;
    if (ak[p3]) {
      // Unrolled iteration 4
    }
    p4 = 4;
    if (ak[p3]) {
      // Unrolled iteration 5
    }
    p4 = 5;
    if (ak[p3]) {
      // Unrolled iteration 6
    }
    p4 = 6;
    if (ak[p3]) {
      // Unrolled iteration 7
    }
    p4 = 7;
    if (ak[p3]) {
      // Unrolled iteration 8
    }
  }

  return g;
}

c fn5() {
  a ae = 0xA3L;
  c p1 = 0x9A5DL;
  c p2 = g;
  c p3 = 0x57638FF4L;
  e p4 = 0x30A04A8FL;
  c p5 = g;

  if (fn4(p1, p2, p3, p4, p5))
    ;

  return ae;
}

int main() {
  fn5();
}