
signed short b;
signed int c;
unsigned signed d;
unsigned signed e;
unsigned signed f;
signed short fn1(signed short p1, signed short p2) { return p1 - p2; }
signed unsigned fn2(signed unsigned p1, signed unsigned p2) { return p1 - p2; }
signed int k;
signed unsigned l;
volatile signed unsigned m[5][8];
signed unsigned fn3(signed unsigned p1) {
  signed short o = 0x4FL;
  for (;;) {
    for (l = 0; l < 20; l++)
      for (k = 0; k >= -27; k = fn1(k, 6))
        p1 = fn2(o, p1);
    p1 || m[2][5];
  }
}
int main() {}
