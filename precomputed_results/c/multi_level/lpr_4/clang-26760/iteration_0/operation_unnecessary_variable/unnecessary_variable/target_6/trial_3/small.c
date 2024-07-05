unsigned g;

int main() {
  int i;
  int j = 0x24F96B7B;
  unsigned k;
  unsigned f;
  for (; f;)
    for (; j; --j)
      ;
  unsigned p;  // p is optimized out
q:
  k = k >> 1;
  i = g;  // p is replaced with g
  if (i) {
    k = k << j;
    goto q;
  }
}