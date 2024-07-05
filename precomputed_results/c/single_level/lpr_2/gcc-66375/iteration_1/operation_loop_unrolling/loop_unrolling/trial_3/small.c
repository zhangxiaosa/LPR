typedef short c;

typedef int d;

typedef unsigned f;

typedef unsigned g;

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

char fn2(char p1, int p2) { return p1; }

c fn3(c p1, c p2) { return p2; }

g fn4(g p1, g p2) { return p1 + p2; }

unsigned p;

f t;

g u;

unsigned v[1][4];


g fn9(f, f, d, g, d);

c fn11() {
  d b = 0L;
  fn9(b, b, t, 18446744073709551613UL, t);
  return b;
}

g fn9(f p1, f p2, d p3, g p4, d p5) {
  d d = 2L;
  
  g e[9];
  int i;
  
  // First iteration
  e[0] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  u++;

  // Second iteration
  e[0] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  u++;

  // Third iteration
  e[0] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  u++;

  return 3;
}

int main() {
  int i, j;
  int f = 0;
  fn11();
  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];
  fn1(p, f);
  return 0;
}