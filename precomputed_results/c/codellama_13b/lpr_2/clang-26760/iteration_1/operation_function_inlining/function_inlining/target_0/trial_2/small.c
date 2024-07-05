
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (f = 0; f;)
    for (; j; --j)
      ;
  int m = j;
q:;
  j = j >> 1L;
  j = j << m;
  goto q;
}
int main() {
  unsigned j = 0x24F96B7BL;
  for (f = 0; f;)
    for (; j; --j)
      ;
  int m = j;
q:;
  j = j >> 1L;
  j = j << m;
  goto q;
}
