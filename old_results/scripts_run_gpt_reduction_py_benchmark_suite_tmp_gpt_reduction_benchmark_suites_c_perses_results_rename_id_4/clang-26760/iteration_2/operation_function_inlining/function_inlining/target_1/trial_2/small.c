int main() {
  unsigned j = 0x24F96B7B;
  unsigned f = 0;
  for (; f;) {
    for (; j; --j)
      ;
  }

  unsigned k = 0;
q:
  k = k >> 1;
  if (0) {
    k = k << j;
    goto q;
  }

  return 0;
}