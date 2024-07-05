int k;
unsigned l;
volatile unsigned m[5][8];
unsigned fn3(p1) {
  int o;
  for (;;) {
    for (; l >= 1; l -= 1) {
      // Unrolled loop body (duplicated l times)
      p1 = o - p1;
      p1 = o - p1;
      // ...
      p1 = o - p1;
    }
    p1 || m[2][5];
  }
}
int main() {}
