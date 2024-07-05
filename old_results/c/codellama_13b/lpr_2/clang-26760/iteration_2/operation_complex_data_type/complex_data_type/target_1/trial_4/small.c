
int fn1() {
  int j_byte0 = 0x24;   // j_byte0 = j & 0xFF
  int j_byte1 = 0xF9;   // j_byte1 = (j >> 8) & 0xFF
  int j_byte2 = 0x6B;   // j_byte2 = (j >> 16) & 0xFF
  int j_byte3 = 0x7B;   // j_byte3 = (j >> 24) & 0xFF
  int f;
  for (f; f;)
    j = 1;
  int m = j;
q:;
  j = j >> 1;
  j = j << m;
  goto q;
}
