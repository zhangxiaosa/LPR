
int k;
int l;
volatile int m[5][8];
int fn3(p1) {
  int o; // This variable is not used, so it will be optimized out.
  for (;;) {
    for (; l; l--)
      for (k = 0; k >= -27; k -= 6)
        p1 = p1 - m[2][5];
  }
}
int main() {}
