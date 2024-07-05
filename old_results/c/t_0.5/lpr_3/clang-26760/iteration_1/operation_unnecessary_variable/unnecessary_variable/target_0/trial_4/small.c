int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  signed n = g;
  int o = n;
  unsigned p = o;
q:;
  k = k >> 1L;
  p = p;  // Copy propagation: Replace i with p
  if (p) {  // Constant propagation: Replace i with p
    k = k << j;
    goto q;
  }
}