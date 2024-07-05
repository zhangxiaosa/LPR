
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (int f; f;) {
    j = 1L;
  }
  int m = j;

  // Inline function
  while (j > 0) {
    j = j >> 1L;
    j = j << m;
  }

  return j;
}
