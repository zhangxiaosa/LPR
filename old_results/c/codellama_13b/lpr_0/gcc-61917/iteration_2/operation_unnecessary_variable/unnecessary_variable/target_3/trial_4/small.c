
int k;
int l;
volatile int m[5][8];
int fn3(o) {
  for (;;) {
    for (; l; l--)
      for (k = 0; k >= -27; k -= 6)
        o = o - o;
  }
}
int main() {
  fn3(0);
}
