typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
b fn1(b p1) { return p1 - p2; }
f fn2(f p1, f p2) { return p1 - p2; }
e l;
volatile f m[5][8];
d fn3(f p1) {
  for (l = 0; l < 20; l++) {
    for (k = 0; k >= -27; k = fn1(k, 6)) {
      p1 = fn2(0x4FL, p1);
    }
  }
  p1 || m[2][5];
}
int main() {}
