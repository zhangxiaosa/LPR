
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (int f; f;) {
    j = 1L;
    j = j >> 1L;
    j = j << j;
  }
  return j;
}
int main() {
  fn1();
  return 0;
}
