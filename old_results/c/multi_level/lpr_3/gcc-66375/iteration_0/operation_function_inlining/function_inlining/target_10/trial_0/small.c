typedef char a;

typedef short c;

typedef int d;

typedef unsigned e;

typedef unsigned f;

typedef unsigned g;

a fn2(a p1, int p2) { return p1; }

c fn3(c p1, c p2) { return p2; }

f p;

f t;

g u;

g v[1][4];

e fn8(a, d);

g fn9(f p1, f p2, d p3, g p4, d p5) {
  {
    e c = 255UL;
    {
      d d = 2L;
      for (; u < 51; ++u) {
        g e[9];
        int i;
        for (i = 0; i < 9; i++)
          e[i] = 0x9EE7F9D1C772505BLL;
        d = fn2(v[0][3] = fn3(4L, d), 3) + e[0];
      }
    }
  }
  return p2;
}
d fn10(d p1, e p2, f p3, d p4) {
  d d = 2L;
  for (; u < 51; ++u) {
    g e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[0];
  }
  return 3;
}
c fn11() {
  a a = 0xFBL;
  {
    d b = 0L;
    {
      e c = 255UL;
      {
        d d = 2L;
        for (; u < 51; ++u) {
          g e[9];
          int i;
          for (i = 0; i < 9; i++)
            e[i] = 0x9EE7F9D1C772505BLL;
          d = fn2(v[0][3] = fn3(4L, d), 3) + e[0];
        }
      }
    }
    return b;
  }
}
e fn8(a p1, d p2) {
  {
    f p1 = t;
    {
      f p2 = t;
      {
        d p3 = t;
        {
          g p4 = 18446744073709551613UL;
          {
            d p5 = t;
            {
              e c = 255UL;
              {
                d d = 2L;
                for (; u < 51; ++u) {
                  g e[9];
                  int i;
                  for (i = 0; i < 9; i++)
                    e[i] = 0x9EE7F9D1C772505BLL;
                  d = fn2(v[0][3] = fn3(4L, d), 3) + e[0];
                }
              }
            }
          }
        }
      }
    }
  }
  return p1;
}

int main() {
  int i, j;
  int f = 0;
  fn11();
  {
    e c = 255UL;
    {
      d d = 2L;
      for (; u < 51; ++u) {
        g e[9];
        int i;
        for (i = 0; i < 9; i++)
          e[i] = 0x9EE7F9D1C772505BLL;
        d = fn2(v[0][3] = fn3(4L, d), 3) + e[0];
      }
    }
  }
  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];
  printf("checksum = %X\n", p);
  return 0;
}