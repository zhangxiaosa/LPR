unsigned g;
void fn1() {
  unsigned k;
q:
  k = k >> 1L;
  if (g) {
    k = k << j;
    goto q;
  }
}