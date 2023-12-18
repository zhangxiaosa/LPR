int main() {
  unsigned int j = 0x24F96B7BL;
  if (j)
    --j;
q:
  if (g) {
    k >>= 1L;
    k <<= j;
    goto q;
  }
}