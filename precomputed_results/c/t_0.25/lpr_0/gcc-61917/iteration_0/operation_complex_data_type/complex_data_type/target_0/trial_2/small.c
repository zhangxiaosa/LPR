int k;
unsigned l;
volatile unsigned m_00, m_01, m_02, m_03, m_04, m_05, m_06, m_07;
volatile unsigned m_10, m_11, m_12, m_13, m_14, m_15, m_16, m_17;
volatile unsigned m_20, m_21, m_22, m_23, m_24, m_25, m_26, m_27;
volatile unsigned m_30, m_31, m_32, m_33, m_34, m_35, m_36, m_37;
volatile unsigned m_40, m_41, m_42, m_43, m_44, m_45, m_46, m_47;

unsigned fn3(unsigned p1) {
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = 0x4FL - p1;
    if (p1)
      m_20 = m_25;
  }
}

int main() {}
