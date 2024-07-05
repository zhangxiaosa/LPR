int fn1(int p1, int p2) { return p1 - p2; }

unsigned fn2(unsigned p1, unsigned p2) { return p1 - p2; }

int k;
unsigned l;
volatile unsigned m0_0;
volatile unsigned m0_1;
volatile unsigned m0_2;
volatile unsigned m0_3;
volatile unsigned m0_4;
volatile unsigned m0_5;
volatile unsigned m0_6;
volatile unsigned m0_7;
volatile unsigned m1_0;
volatile unsigned m1_1;
volatile unsigned m1_2;
volatile unsigned m1_3;
volatile unsigned m1_4;
volatile unsigned m1_5;
volatile unsigned m1_6;
volatile unsigned m1_7;
volatile unsigned m2_0;
volatile unsigned m2_1;
volatile unsigned m2_2;
volatile unsigned m2_3;
volatile unsigned m2_4;
volatile unsigned m2_5;
volatile unsigned m2_6;
volatile unsigned m2_7;
volatile unsigned m3_0;
volatile unsigned m3_1;
volatile unsigned m3_2;
volatile unsigned m3_3;
volatile unsigned m3_4;
volatile unsigned m3_5;
volatile unsigned m3_6;
volatile unsigned m3_7;
volatile unsigned m4_0;
volatile unsigned m4_1;
volatile unsigned m4_2;
volatile unsigned m4_3;
volatile unsigned m4_4;
volatile unsigned m4_5;
volatile unsigned m4_6;
volatile unsigned m4_7;

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
