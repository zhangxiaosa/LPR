typedef char a;

typedef short c;

typedef int d;

typedef unsigned e;

typedef unsigned f;

typedef unsigned g;

f p;

f t;

g u;

g v[1][4];

f fn9(f p1, f p2, d p3, g p4, d p5) {
  d local_d = 2L;
  for (; u < 51; ++u) {
    g e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    local_d = (p4 = local_d, 3) + e[0];
  }
  return p2;
}

int main() {
  int i, j;

  {
    a a = 0xFBL;
    {
      d local_d = 2L;
      for (; u < 51; ++u) {
        g e[9];
        int i;
        for (i = 0; i < 9; i++)
          e[i] = 0x9EE7F9D1C772505BLL;
        local_d = (v[0][3] = local_d, 3) + e[0];
      }
    }
  }

  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];

  printf("checksum = %X\n", p);
  return 0;
}