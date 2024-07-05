typedef char a;

typedef short c;

typedef int d;

typedef unsigned e;

typedef unsigned f;

typedef unsigned g;

a fn2(a p1, int p2) { return p1; }

c fn3(c p1, c p2) { return p2; }

f p;
g u;
g v[1][4];

d fn10(d, e, f, d);

c fn11() {
  fn10(6, 255UL, 1, 0L);
  return 0L;
}

d fn10(d p1, e p2, f p3, d p4) {
  d d = 2L;
  for (; u < 51; ++u) {
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

    d = fn2(v[0][3] = fn3(4L, d), 3) + e[0];
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[1];
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[2];
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[3];
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[4];
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[5];
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[6];
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[7];
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[8];
  }
  return 3;
}

int main() {
  int i, j;
  fn11();
  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];
  printf("checksum = %X\n", p);
  return 0;
}