typedef char a;
typedef short c;
typedef int d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

a fn2(a p1, int p2) {
  return p1;
}

c fn3(c p1, c p2) {
  return p2;
}

g fn4(g p1, g p2) {
  return p1 + p2;
}

f p;

void fn5(p1) {
  p = p1;
}

void fn6(p1) {
  fn5(p1);
}

void fn7(g p1, char *p2, int p3) {
  fn6(p1);
}

f t;
g u;
g v[1][4];

e fn8(a, d);

c fn11() {
  a a = 0xFBL;
  d b = 0L;
  fn8(t, a);
  return b;
}

e fn8(a p1, d p2) {
  d d = 2L;
  g e[9];
  int i;

  e[0] = 0x9EE7F9D1C772505BLL;
  e[1] = 0x9EE7F9D1C772505BLL;
  e[2] = 0x9EE7F9D1C772505BLL;
  e[3] = 0x9EE7F9D1C772505BLL;
  e[4] = 0x9EE7F9D1C772505BLL;
  e[5] = 0x9EE7F9D1C772505BLL;
  e[6] = 0x9EE7F9D1C772505BLL;
  e[7] = 0x9EE7F9D1C772505BLL;
  e[8] = 0x9EE7F9D1C772505BLL;

  v[0][3] = fn3(4L, d);
  d = fn2(v[0][3], 3);
  d = fn4(d, e[0]);
  d = fn4(d, e[1]);
  d = fn4(d, e[2]);
  d = fn4(d, e[3]);
  d = fn4(d, e[4]);
  d = fn4(d, e[5]);
  d = fn4(d, e[6]);
  d = fn4(d, e[7]);
  d = fn4(d, e[8]);

  return p1;
}

int main() {
  int i, j;
  int f = 0;

  fn11();

  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      fn6(v[i][j]);
    }
  }

  fn1(p, f);

  return 0;
}