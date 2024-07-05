typedef short c;
typedef int d;
typedef unsigned e;
typedef unsigned g;

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

char fn2(char p1, int p2) {
  return p1;
}

c fn3(c p1, c p2) {
  return p2;
}

g fn4(g p1, g p2) {
  return p1 + p2;
}

unsigned p;

void fn5(p1) {
  p = p1;
}

void fn6(p1) {
  fn5(p1);
}

void fn7(g p1, char *p2, int p3) {
  fn6(p1);
}

unsigned t;
g u;
g v[1][4];

e fn8(char p1, d p2) {
  d d = 2L;

  for (; u < 51; ++u) {
    g e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    v[0][3] = fn3(4L, d);
    d = fn2(v[0][3], 3);
    d = fn4(d, e[0]);
  }

  return p1;
}

int main() {
  int i, j;
  int f = 0;
  d b = 0L;

  fn8(t, 0xFBL);

  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      fn7(v[i][j], "g_1729[i][j]", f);
    }
  }

  fn1(p, f);

  return b;
}