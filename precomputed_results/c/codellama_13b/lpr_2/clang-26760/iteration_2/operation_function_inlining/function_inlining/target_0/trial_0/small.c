
int fn1() {
  unsigned j = 0x24F96B7BL;
  int m = j;
  j = 1L;
  while (1) {
    j = j >> 1L;
    j = j << m;
  }
}
int main() {}
