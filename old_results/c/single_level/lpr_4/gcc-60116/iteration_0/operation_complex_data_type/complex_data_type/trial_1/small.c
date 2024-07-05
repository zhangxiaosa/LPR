typedef short a;
typedef int b;
typedef long c;
typedef char d;
typedef unsigned e;
typedef unsigned f;
typedef long long g;

int printf(const char *, ...);

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

a fn2(a p1, a p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

c fn3(c p1, c p2) {
  return p2;
}

d fn4(d p1, d p2) {
  return p1;
}

d fn5(d p1, int p2) {
  return p2;
}

e fn6(e p1, e p2) {
  return p2;
}

e fn7(e p1, e p2) {
  return p1;
}

g fn8(g p1, g p2) {
  return p1 + p2;
}

f q;
void fn9(p1) {
  q = p1;
}

void fn10(p1) {
  fn9(p1);
}

void fn11(g p1, char *p2, int p3) {
  fn10(p1);
}

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
  b au1_1[2][10];
  b au1_2[2][10];
  b au1_3[2][10];
  b au1_4[2][10];
  b au1_5[2][10];

  b au2_1_1[10];
  b au2_1_2[10];
  b au2_2_1[10];
  b au2_2_2[10];
  b au2_3_1[10];
  b au2_3_2[10];
  b au2_4_1[10];
  b au2_4_2[10];
  b au2_5_1[10];
  b au2_5_2[10];

  b au3_1_1_1;
  b au3_1_1_2;
  b au3_1_1_3;
  b au3_1_1_4;
  b au3_1_1_5;
  b au3_1_1_6;
  b au3_1_1_7;
  b au3_1_1_8;
  b au3_1_1_9;
  b au3_1_1_10;

  b au3_1_2_1;
  b au3_1_2_2;
  b au3_1_2_3;
  b au3_1_2_4;
  b au3_1_2_5;
  b au3_1_2_6;
  b au3_1_2_7;
  b au3_1_2_8;
  b au3_1_2_9;
  b au3_1_2_10;

  b au3_2_1_1;
  b au3_2_1_2;
  b au3_2_1_3;
  b au3_2_1_4;
  b au3_2_1_5;
  b au3_2_1_6;
  b au3_2_1_7;
  b au3_2_1_8;
  b au3_2_1_9;
  b au3_2_1_10;

  b au3_2_2_1;
  b au3_2_2_2;
  b au3_2_2_3;
  b au3_2_2_4;
  b au3_2_2_5;
  b au3_2_2_6;
  b au3_2_2_7;
  b au3_2_2_8;
  b au3_2_2_9;
  b au3_2_2_10;

  b au3_3_1_1;
  b au3_3_1_2;
  b au3_3_1_3;
  b au3_3_1_4;
  b au3_3_1_5;
  b au3_3_1_6;
  b au3_3_1_7;
  b au3_3_1_8;
  b au3_3_1_9;
  b au3_3_1_10;

  b au3_3_2_1;
  b au3_3_2_2;
  b au3_3_2_3;
  b au3_3_2_4;
  b au3_3_2_5;
  b au3_3_2_6;
  b au3_3_2_7;
  b au3_3_2_8;
  b au3_3_2_9;
  b au3_3_2_10;

  b au3_4_1_1;
  b au3_4_1_2;
  b au3_4_1_3;
  b au3_4_1_4;
  b au3_4_1_5;
  b au3_4_1_6;
  b au3_4_1_7;
  b au3_4_1_8;
  b au3_4_1_9;
  b au3_4_1_10;

  b au3_4_2_1;
  b au3_4_2_2;
  b au3_4_2_3;
  b au3_4_2_4;
  b au3_4_2_5;
  b au3_4_2_6;
  b au3_4_2_7;
  b au3_4_2_8;
  b au3_4_2_9;
  b au3_4_2_10;

  b au3_5_1_1;
  b au3_5_1_2;
  b au3_5_1_3;
  b au3_5_1_4;
  b au3_5_1_5;
  b au3_5_1_6;
  b au3_5_1_7;
  b au3_5_1_8;
  b au3_5_1_9;
  b au3_5_1_10;

  b au3_5_2_1;
  b au3_5_2_2;
  b au3_5_2_3;
  b au3_5_2_4;
  b au3_5_2_5;
  b au3_5_2_6;
  b au3_5_2_7;
  b au3_5_2_8;
  b au3_5_2_9;
  b au3_5_2_10;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(as, fn6(aq, fn5(ai, au3_5_2_8 = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an), ak) && 0x57L))) > 2)) {
        v = am;
        ag[3] = au3_5_2_8;
      } else {
        ao = au3_5_2_8;
      }
    }
    return al;
  }
}

int main() {
  int av = 0;
  fn12();
  fn11(v, "g_3", av);
  fn1(q, av);
  return 0;
}