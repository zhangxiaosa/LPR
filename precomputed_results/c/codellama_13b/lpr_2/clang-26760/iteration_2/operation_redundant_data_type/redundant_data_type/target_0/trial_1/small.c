
int fn1() {
  unsigned long j = 0x24F96B7BL;
  while (1) {
    j = 1L;
    int m = j;
    j = j >> 1L;
    j = j << m;
  }
}
