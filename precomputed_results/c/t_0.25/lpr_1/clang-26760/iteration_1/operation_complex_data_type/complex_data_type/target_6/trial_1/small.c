int main() {
  int j = 0x24F96B7B;
  unsigned int k = 0;
  int l = 1L;
  unsigned int p = g;

  while (p) {
    k >>= l;
    if (p)
      k <<= j;
  }
}