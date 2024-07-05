int g;
int main() {
  int i;
  int j = 0x24F96B7B;
  unsigned k;
  for (;;)  // Removed the unused variable `f`
    for (; j; --j)
      ;
q:
  k = k >> 1;
  if (g) {
    k = k << j;
    goto q;
  }
}