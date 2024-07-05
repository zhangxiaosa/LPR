int main() {
  int j = 0x24F96B7B;
  unsigned k;

q:
  k = k >> 1;
  if (0) {
    k = k << j;
    goto q;
  }
}
