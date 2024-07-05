
int f;
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (f = 0; f;)
    for (; j; --j)
      ;
  int m = j; // Unused variable, can be optimized out
q:;
  j = 0x24F96B7BL >> 1L; // Constant propagation
  if (j) {
    j = 0x24F96B7BL << m; // Constant propagation
    goto q;
  }
}
int main() {}
