
int k;
unsigned l;
volatile int m[5][8];

void fn3(int p1) {
  int o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k -= 6)
        p1 = o - p1;
    p1 || m[2][5];
  }
}

int main() {
  // The optimized code for fn3:
  void fn3_opt(int p1) {
    int o;
    for (;;) {
      for (; l; l++)
        for (k = 0; k >= -27; k -= 6)
          p1 = o - p1;
      p1 || m[2][5];
    }
  }
}
