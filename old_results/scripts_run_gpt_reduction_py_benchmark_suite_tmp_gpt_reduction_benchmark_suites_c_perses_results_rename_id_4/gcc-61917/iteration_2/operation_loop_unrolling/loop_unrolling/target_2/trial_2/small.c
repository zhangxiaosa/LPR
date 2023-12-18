int k;
volatile unsigned m_2_5;

int fn3(p1) {
  int o;
  for (;;) {
    int unroll_count = 4;
    for (; unroll_count; unroll_count--) {
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
    }
    p1 || m_2_5;
  }
}

int main() {}
