unsigned g;
int main() {
  int j = 0x24F96B7B;
  unsigned k;
  unsigned f;
  for (; f;)
    for (; j; --j)
      ;
  int m = j;
  unsigned n = g; // Copy propagation: Replace n with g
q:
  k = k >> 1;
  n = n; // Constant propagation: Replace p with n
  if (n) {
    k = k << m;
    goto q;
  }
}