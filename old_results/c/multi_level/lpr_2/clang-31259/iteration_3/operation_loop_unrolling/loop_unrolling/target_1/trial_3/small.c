int main() {
  int ai[2];
  unsigned j;
  
  for (j = 0; j < 2; j++)
    ai[j] = 8;
  
  w = 1;
  
  for (; j < 25; j += 20) {
    // Unrolled Loop - Start
    v = ai[0] ^= ad[w + 1][w][6] = fn4(u--, 4294967295U);
    v = ai[0] ^= ad[w + 1][w][5] = fn4(u--, 4294967295U);
    v = ai[0] ^= ad[w + 1][w][4] = fn4(u--, 4294967295U);
    v = ai[0] ^= ad[w + 1][w][3] = fn4(u--, 4294967295U);
    v = ai[0] ^= ad[w + 1][w][2] = fn4(u--, 4294967295U);
    v = ai[0] ^= ad[w + 1][w][1] = fn4(u--, 4294967295U);
    // Unrolled Loop - End
  }
  
  s = ad[2][1][0];
  printf("checksum = %X\n", s);
  
  return 0;
}