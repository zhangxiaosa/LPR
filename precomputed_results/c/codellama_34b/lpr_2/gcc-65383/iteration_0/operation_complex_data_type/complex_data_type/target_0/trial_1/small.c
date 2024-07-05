
typedef unsigned b_high;
typedef unsigned b_low;
typedef unsigned c_high;
typedef unsigned c_low;
typedef unsigned d_high;
typedef unsigned d_low;

b_high g_high = g >> 16;
b_low g_low = g & 0xFFFF;

b_high h_high[3];
b_low h_low[3];

for (int i = 0; i < 3; i++) {
  h_high[i] = h[i] >> 16;
  h_low[i] = h[i] & 0xFFFF;
}

d_high i_high = i >> 16;
d_low i_low = i & 0xFFFF;

int main() {
  fn2();
}

d fn2() {
  for (;;) {
    c_high q_high = 0xC3L >> 16;
    c_low q_low = 0xC3L & 0xFFFF;
    b_high r[5][9][5];
    if (h_high[2])
      return q_high;
    g_high = r[i_high][i_high][i_high];
  }
}
