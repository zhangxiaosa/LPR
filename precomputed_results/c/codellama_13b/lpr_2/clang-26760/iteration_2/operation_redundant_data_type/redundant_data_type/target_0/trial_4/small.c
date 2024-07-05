
int fn1() {
  unsigned j = 0x24F96B7BL;
  int f = 0;
  while (f < j) {
    j = 1L;
    int m = j;
    j = j >> 1L;
    j = j << m;
  }
}
int main() {}
