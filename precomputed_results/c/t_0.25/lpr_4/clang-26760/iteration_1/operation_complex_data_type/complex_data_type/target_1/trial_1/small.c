int main() {
  int j = 0x24F96B7B;
  unsigned int k = 0;

q:
  k = k >> 1;

  if (k) {
    j--;
    goto q;
  }
}