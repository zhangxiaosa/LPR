
int fn1() {
  int j = 0x24F96B7B;
  for (; j;)
    j = 1;
  int m = j;
q:;
  j = j >> 1;
  j = j << m;
  goto q;
}
