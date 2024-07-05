int k;
volatile unsigned m_2_5;
int main() {
  int o;
  for (;;) {
    int unroll_count = 4;
    for (; unroll_count; unroll_count--) {
      for (k = 0; k >= -27; k = k - 6) {
        o = o - o;
      }
    }
  }
}