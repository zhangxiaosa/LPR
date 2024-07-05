typedef short a;

// ... (other typedefs)

int printf(const char *, ...);

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

a fn2(a p1, a p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

// ... (other functions)

f q;
b v;
f w = 0xDC6F3D13L;
g ag[4];
a ah;
d ai;
c aj;
g ak;
f al;
b am = 0x41AEA787L;
d an;
b ao;
f ap;
b aq;

c fn12() {
  d as = 4UL;
  a at = 1L;
  b au[5][2][10];

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >=
          (as, (aq, (ai, (au[4][1][5] = (~((aj, (ap, at)) != 0), an)), ak) && 0x57L))) > 2) {
        v = am;
        ag[3] = au[4][1][5];
      } else {
        ao = au[4][1][5];
      }
    }
    return al;
  }
}

int main() {
  int av = 0;
  d as = 4UL;
  a at = 1L;
  b au[5][2][10];

  // fn9(p1) inlined
  q = v;

  // fn10(p1) inlined
  // fn9(p1) inlined
  q = v;

  // fn11(p1, p2, p3) inlined
  // fn10(p1) inlined
  // fn9(p1) inlined
  q = v;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >=
          (as, (aq, (ai, (au[4][1][5] = (~((aj, (ap, at)) != 0), an)), ak) && 0x57L))) > 2) {
        v = am;
        ag[3] = au[4][1][5];
      } else {
        ao = au[4][1][5];
      }
    }

    // fn1(q, av) inlined
    printf("checksum = %X\n", q);

    return 0;
  }
}