int fn1(int p1, int p2) { return p1 - p2; }

unsigned fn2(unsigned p1, unsigned p2) { return p1 - p2; }

int k;
unsigned l;
volatile unsigned m0_0, m0_1, m0_2, m0_3, m0_4, m0_5, m0_6, m0_7, m1_0, m1_1, m1_2, m1_3, m1_4, m1_5, m1_6, m1_7, m2_0, m2_1, m2_2, m2_3, m2_4, m2_5, m2_6, m2_7, m3_0, m3_1, m3_2, m3_3, m3_4, m3_5, m3_6, m3_7, m4_0, m4_1, m4_2, m4_3, m4_4, m4_5, m4_6, m4_7;
unsigned fn3(unsigned p1) {
  int o = 0x4F;
  for (;;) {
    for (l = 0; l < 20; l++)
      for (k = 0; k >= -27; k = fn1(k, 6))
        p1 = fn2(o, p1);
    p1 || m2_5;
  }
}

int main() {}
