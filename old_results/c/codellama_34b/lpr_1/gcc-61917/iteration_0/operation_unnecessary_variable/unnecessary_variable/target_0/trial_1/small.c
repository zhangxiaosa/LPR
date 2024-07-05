
<SYS>

int fn2(int p1_int, int p2_int) { return p1_int - p2_int; }
int l;
volatile int m[5][8];
int fn3(p1_int) {
  int o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1_int = fn2(o, p1_int);
    p1_int || m[2][5];
  }
}
int main() {}

// Constant propagation
int fn2(int p1_int, int p2_int) { return p1_int - p2_int; }
int l;
volatile int m[5][8];
int fn3(p1_int) {
  int o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1_int = fn2(o, p1_int);
    p1_int || m[2][5];
  }
}
int main() {}

// Copy propagation
int fn2(int p1_int, int p2_int) { return p1_int - p2_int; }
int l;
volatile int m[5][8];
int fn3(p1_int) {
  int o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1_int = fn2(o, p1_int);
    p1_int || m[2][5];
  }
}
int main() {}

// Optimized program
int fn2(int p1_int, int p2_int) { return p1_int - p2_int; }
int l;
volatile int m[5][8];
int fn3(p1_int) {
  int o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1_int = fn2(o, p1_int);
    p1_int || m[2][5];
  }
}
int main() {}
