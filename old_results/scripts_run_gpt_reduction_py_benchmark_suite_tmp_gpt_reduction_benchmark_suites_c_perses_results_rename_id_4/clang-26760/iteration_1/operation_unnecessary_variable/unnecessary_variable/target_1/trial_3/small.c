int g;

int main() {
  int j = 0x24F96B7B;
  unsigned k;
  unsigned f = 0;
  for (; f;)
    for (; j; --j)
      ;
q:
  k = k >> 1;
  // i = g; (Optimized out)
  if (g) {
    k = k << j;
    goto q;
  }
}