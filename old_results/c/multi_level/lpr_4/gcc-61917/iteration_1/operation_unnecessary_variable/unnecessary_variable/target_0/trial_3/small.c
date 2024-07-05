int fn3(int p1) {
  for (;;) {
    int unroll_count = 4;
    for (; unroll_count; unroll_count--)
      for (int k = 0; k >= -27; k = k - 6)
        p1 = p1 - p1;
    p1 || m_2_5;
  }
}

int main() {}
