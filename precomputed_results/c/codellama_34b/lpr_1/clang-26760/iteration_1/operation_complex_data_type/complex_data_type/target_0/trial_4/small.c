
int g;
int main() {
  int i, j, k;
  unsigned int f;
  for (int f = 0; f < 32; f++) {
    int bit = g & (1 << f);
    if (bit) {
      k = k << 1;
      i = f;
      goto q;
    }
  }
  k = k >> 1;
  i = g;
  if (i == 0) {
    k = k << j;
  }
}
