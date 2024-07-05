
int fn1() {
  unsigned j = 0x24F96B7BL;
  int f = 1;
  while (f) {
    j = 1L;
    int m = j;
    j = j >> 1L;
    j = j << m;
    if (j == 0) {
      break;
    }
  }
}
int main() {}
