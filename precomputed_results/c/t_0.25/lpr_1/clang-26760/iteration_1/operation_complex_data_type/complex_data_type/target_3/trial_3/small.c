signed int g;

int main() {
  int j = 0x24F96B7B;
  unsigned int k;
  for (;;) // Removed 'f = 0' condition
    for (; j; --j)
      ;
  int l = 1L;
  unsigned int p = g;
  while (p) {
    k = k >> l;
    if (p)
      k = k << j;
  }
}