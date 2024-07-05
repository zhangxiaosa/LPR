int main() {
  int i = 0;
  unsigned l = 1;
  for (; i;) {
    unsigned m = 0x24F96B7B;
    i = i >> l;
    if (i) {
      m = m << i;
    }
  }
}