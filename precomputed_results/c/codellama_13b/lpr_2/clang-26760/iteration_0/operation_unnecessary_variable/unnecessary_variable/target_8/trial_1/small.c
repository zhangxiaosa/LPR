
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (; j; --j)
    ;
  int m = j;
q:;
  j = j >> 1L;
  if (j) {
    j = j << m;
    goto q;
  }
}
int main() {}
