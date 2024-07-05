short fn1() {
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
q:
  k = k >> 1L;
  if (g) {
    k = k << 0;
    goto q;
  }
}
int main() {}
