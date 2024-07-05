
int fn1() {
  unsigned j = 0x24F96B7BL;
  while (j) {
    j = j >> 1L;
    if (j) {
      j = j << j;
      return;
    }
  }
}
