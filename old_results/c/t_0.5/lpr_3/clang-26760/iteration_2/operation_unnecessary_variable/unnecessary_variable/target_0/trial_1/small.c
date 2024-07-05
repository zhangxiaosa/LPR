int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  unsigned p = g;
q:;
  k = k >> 1L;
  p = p;  // Optimization: Replace i with p
  if (p) {
    k = k << j;
    goto q;
  }
}