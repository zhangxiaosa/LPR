int main() {
  int j = 0x24F96B7B;
  unsigned k;
  if (j)
    --j;
q:
  k = k >> 1;
  if (false) {
    k = k << j;
    goto q;
  }
}
