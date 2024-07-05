
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (int f = 0; f < 2; f++)
    j = 1L;
  int m = j;
q:;
  j = j >> 1L;
  j = j << m;
  goto q;
}
int main() {}
