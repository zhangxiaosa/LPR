typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

b fn1(b p1, b p2) {
  return p1 - p2;
}

f fn2(f p1, f p2) {
  return p1 - p2;
}

e l;
volatile f m[5][8];

d fn3(f p1) {
  for (;;) {
    for (l = 0; l < 20; l++)
      for (c = 0; c >= -108; c = fn1(c, 24))
        p1 = fn2(0x4F, p1);
    p1 || m[2][5];
  }
}

int main() {}