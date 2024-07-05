
int fn1() {
  unsigned k;

q:;
  k = k >> 1L;
  if (0) {
    k = k << 0xF9;
    goto q;
  }
}
