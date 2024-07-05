int main() {
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
q:
  k >>= 1;
  if (j) {
    k <<= j;
    goto q;
  }
}