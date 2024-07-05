int main() {
  int j = 0x24F96B7B;
  unsigned k;
  if (j)
    --j;
  unsigned k = k >> 1;
q:
  k = k << j;
  goto q;
}