int main() {
  unsigned k = 0;
  int j = 0x24F96B7B;
  int m = j;
  unsigned p = 0;
  
  while (p) {
    k >>= 1;
    if (p)
      k <<= m;
  }
}