#include<stdio.h>

original_data_type fn4(original_data_type p1, original_data_type p2) { return p1 % p2; }
original_data_type fn5(original_data_type p1, original_data_type p2) { return p1; }
original_data_type s;
original_data_type u;
original_data_type v;
static original_data_type w = 254;
original_data_type ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
original_data_type af;
original_data_type fn9() {
  original_data_type ai[2];
  original_data_type i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 2; i++)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn5(1, fn5(255, u--)), 4294967295);
    return af;
  }
}
original_data_type main() {
  fn9();
  s = ad[2][1][0];
  original_data_type printf("checksum = %d\n", s);
  return 0;
}