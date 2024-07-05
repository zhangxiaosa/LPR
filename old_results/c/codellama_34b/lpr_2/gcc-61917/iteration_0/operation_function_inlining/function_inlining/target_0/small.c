
typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

c k;
e l;
volatile f m[5][8];

f fn2(f p1, f p2) { return p1 - p2; }

d fn3(f p1) {
  a o = 0x4FL;
  for (;;) {
    for (l = 0; l < 20; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = fn2(o, p1);
    p1 || m[2][5];
  }
}

int main() {}
