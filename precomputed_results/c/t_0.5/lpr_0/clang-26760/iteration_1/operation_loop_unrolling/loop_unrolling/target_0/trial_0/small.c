int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned k;

  // Loop unrolling
  j -= 0x24F96B7B;
  j -= 0x24F96B7B;
  // ... Repeat the line above 0x24F96B7B times ...

  int m = 0;
  unsigned p = 0;

q:
  k = k >> 1;
  i = p;
  if (i) {
    k = k << m;
    if (i) goto q;
  }
}