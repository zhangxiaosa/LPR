
int f;
int fn1() {
  unsigned int j = 0x24F96B7BL;
  int m = j;
q:;
  j = j >> 1L;
  j = j << m;
  goto q;
}
int main() {}
