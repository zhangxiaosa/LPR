typedef short b;

typedef int c;

typedef unsigned d;

typedef unsigned e;

typedef unsigned f;

b fn1(b p1, b p2) { return p1 - p2; }

f fn2(f p1, f p2) { return p1 - p2; }

c k;

e l;

volatile f m_0_0;
volatile f m_0_1;
volatile f m_0_2;
volatile f m_0_3;
volatile f m_0_4;
volatile f m_0_5;
volatile f m_0_6;
volatile f m_0_7;
volatile f m_1_0;
volatile f m_1_1;
volatile f m_1_2;
volatile f m_1_3;
volatile f m_1_4;
volatile f m_1_5;
volatile f m_1_6;
volatile f m_1_7;
volatile f m_2_0;
volatile f m_2_1;
volatile f m_2_2;
volatile f m_2_3;
volatile f m_2_4;
volatile f m_2_5;
volatile f m_2_6;
volatile f m_2_7;
volatile f m_3_0;
volatile f m_3_1;
volatile f m_3_2;
volatile f m_3_3;
volatile f m_3_4;
volatile f m_3_5;
volatile f m_3_6;
volatile f m_3_7;
volatile f m_4_0;
volatile f m_4_1;
volatile f m_4_2;
volatile f m_4_3;
volatile f m_4_4;
volatile f m_4_5;
volatile f m_4_6;
volatile f m_4_7;

d fn3(f p1) {
  signed o = 0x4FL;
  for (;;) {
    for (l = 0; l < 20; l++)
      for (k = 0; k >= -27; k = fn1(k, 6))
        p1 = fn2(o, p1);
    p1 || m_2_5;
  }
}

int main() {}
