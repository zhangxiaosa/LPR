short fn1() {
  int j = 0x24F96B7BL - 1;
  unsigned k;
  if (j)
    --j;
q:
  k = k >> 1L;
  if (g) {
    k = k << j;
    goto q;
  }
}

int main() {}