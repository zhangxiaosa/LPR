typedef char a;

typedef short c;

typedef int d;

typedef unsigned e;

typedef unsigned f;

typedef unsigned g;

a fn2(a p1, int p2) { return p1; }

f p;
f t;
g u;
g v[1][4];

int main() {
  int i, j;

  {
    a a = 0xFBL;
    {
      d d = 2L;
      for (; u < 51; ++u) {
        g e[9] = {0x9EE7F9D1C772505BLL, 0x9EE7F9D1C772505BLL, 0x9EE7F9D1C772505BLL, 0x9EE7F9D1C772505BLL,
                    0x9EE7F9D1C772505BLL, 0x9EE7F9D1C772505BLL, 0x9EE7F9D1C772505BLL, 0x9EE7F9D1C772505BLL,
                    0x9EE7F9D1C772505BLL};
        int j;
        for (j = 0; j < 4; j++)
          p = v[0][j];
        d = (v[0][3] = 2L) + e[0];
      }
    }
  }

  printf("checksum = %X\n", p);
  return 0;
}