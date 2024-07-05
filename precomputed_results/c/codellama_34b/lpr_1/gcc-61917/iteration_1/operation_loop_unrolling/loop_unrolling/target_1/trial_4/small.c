
int fn2(int p1_int, int p2_int) { return p1_int - p2_int; }
int k;
int l;
volatile int m[5][8];
int fn3(p1_int) {
  int o;
  for (;;) {
    for (k = 0; k >= -27; k = k - 6) {
      for (l = 0; l < 5; l++)
        p1_int = fn2(o, p1_int);
      for (l = 5; l < 10; l++)
        p1_int = fn2(o, p1_int);
      for (l = 10; l < 15; l++)
        p1_int = fn2(o, p1_int);
      for (l = 15; l < 20; l++)
        p1_int = fn2(o, p1_int);
      for (l = 20; l < 25; l++)
        p1_int = fn2(o, p1_int);
      for (l = 25; l < 30; l++)
        p1_int = fn2(o, p1_int);
    }
    p1_int || m[2][5];
  }
}
int main() {}
