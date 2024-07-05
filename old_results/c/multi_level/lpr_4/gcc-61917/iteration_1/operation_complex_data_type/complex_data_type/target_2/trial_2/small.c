int k;
volatile unsigned m_0_0, m_0_1, m_0_2, m_0_3, m_0_4, m_0_5, m_0_6, m_0_7;
volatile unsigned m_1_0, m_1_1, m_1_2, m_1_3, m_1_4, m_1_5, m_1_6, m_1_7;
volatile unsigned m_2_0, m_2_1, m_2_2, m_2_3, m_2_4, m_2_5, m_2_6, m_2_7;
volatile unsigned m_3_0, m_3_1, m_3_2, m_3_3, m_3_4, m_3_5, m_3_6, m_3_7;
volatile unsigned m_4_0, m_4_1, m_4_2, m_4_3, m_4_4, m_4_5, m_4_6, m_4_7;

int fn3(int p1) {
  int o;
  for (;;) {
    int unroll_count = 4;
    for (; unroll_count; unroll_count--)
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
    p1 || m_2_5;
  }
}

int main() {}
