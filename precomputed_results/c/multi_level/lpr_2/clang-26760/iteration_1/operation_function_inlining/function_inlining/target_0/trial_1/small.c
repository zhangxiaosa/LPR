int g;

void fn1() {
  int j = 0x24F96B7BL;
  unsigned result;
  while (g) {
    result >>= 1;
    if (g) {
      result <<= j;
    }
  }
  return;
}