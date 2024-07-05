int k;
volatile unsigned m_2_5;
int fn3(p1) {
  int o;
  for (;;) {
    int unroll_count = 4;
    for (; unroll_count; unroll_count--) {
      // Unroll the loop four times
      k = 0;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
    }
    p1 || m_2_5;
  }
}

int main() {}
