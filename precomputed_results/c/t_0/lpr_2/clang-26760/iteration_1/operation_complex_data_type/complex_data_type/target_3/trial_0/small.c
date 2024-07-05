int main() {
  unsigned k = 0;
  unsigned p = 0;
  
  while (p) {
    k >>= 1;
    if (p)
      k <<= 1;
  }
}