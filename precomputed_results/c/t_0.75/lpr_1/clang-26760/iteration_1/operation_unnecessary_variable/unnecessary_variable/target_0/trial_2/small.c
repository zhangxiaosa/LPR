short fn1() {
  unsigned k;
  int m = 0x24F96B7BL;
q:
  k = k >> 1L;
  if (g) {
    k = k << m;
    goto q;
  }
}

int main() {}
