
int f;
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (f = 0; f;)
    for (; j; --j)
      ;
  // Optimized out: int m = j;
q:;
  j = j >> 1L;
  if (j) {
    j = j << j;
    goto q;
  }
}
int main() {}
