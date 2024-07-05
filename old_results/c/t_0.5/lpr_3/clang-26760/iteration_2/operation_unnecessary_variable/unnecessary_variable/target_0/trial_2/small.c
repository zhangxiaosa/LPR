int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  unsigned p = g;
q:;
  k = p;  // Constant propagation
  if (k) {
    k = k << j;
    goto q;
  }
}