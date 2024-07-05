int f;
signed g;

int main() {
  int j = 0x24F96B7B;
  unsigned k;

  // Loop unrolled
  while (1) {
    for (; j; --j)
      ;
  }

  int l = 1L;
  unsigned p = g;

  while (p) {
    k = k >> l;
    if (p)
      k = k << j;
  }
}