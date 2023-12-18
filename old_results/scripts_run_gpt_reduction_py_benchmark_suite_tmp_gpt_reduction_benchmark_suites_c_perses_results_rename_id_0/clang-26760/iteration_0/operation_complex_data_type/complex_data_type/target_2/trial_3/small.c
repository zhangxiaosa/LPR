int main() {
  int i;
  unsigned int k;
  for (int j = 0x24F96B7B; j; --j) {
    k = k >> 1;
    if (i)
      k = k << j;
  }
}