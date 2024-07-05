
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (int i = 0; i < 32; i++) {
    j = 1L;
    j = j >> 1L;
    j = j << i;
  }
}

int main() {
  fn1();
  return 0;
}
