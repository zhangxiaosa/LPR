typedef char a;
typedef int d;
typedef unsigned f;
typedef unsigned g;
a fn2(a p1, int p2) { return p1; }
f p;
g u;
g v[1][4];
int main() {
  int i, j;
  d d = 2L;

  g e0[9];
  g e1[9];
  g e2[9];
  g e3[9];
  g e4[9];
  g e5[9];
  g e6[9];
  g e7[9];
  g e8[9];

  for (i = 0; i < 9; ++i) {
    e0[i] = 0x9EE7F9D1C772505BLL;
    e1[i] = 0x9EE7F9D1C772505BLL;
    e2[i] = 0x9EE7F9D1C772505BLL;
    e3[i] = 0x9EE7F9D1C772505BLL;
    e4[i] = 0x9EE7F9D1C772505BLL;
    e5[i] = 0x9EE7F9D1C772505BLL;
    e6[i] = 0x9EE7F9D1C772505BLL;
    e7[i] = 0x9EE7F9D1C772505BLL;
    e8[i] = 0x9EE7F9D1C772505BLL;
  }

  d = fn2(v[0][3] = d, 3) + e0[0];
  d = fn2(v[0][3] = d, 3) + e1[0];
  d = fn2(v[0][3] = d, 3) + e2[0];
  d = fn2(v[0][3] = d, 3) + e3[0];
  d = fn2(v[0][3] = d, 3) + e4[0];
  d = fn2(v[0][3] = d, 3) + e5[0];
  d = fn2(v[0][3] = d, 3) + e6[0];
  d = fn2(v[0][3] = d, 3) + e7[0];
  d = fn2(v[0][3] = d, 3) + e8[0];

  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];

  printf("checksum = %X\n", p);
  return 0;
}