int g = 0;

int main() {
  unsigned k;

  q:
  k = k >> 1L;
  if (g) {
    k = k << 0x24F96B7B;
    goto q;
  }
}