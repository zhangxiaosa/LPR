c
int fn1() {
  int j = 0x24F96B7BL;
  for (;;) {
    for (; j; --j)
      ;
    j = j >> 1L;
    if (j) {
      j = j << 0x24F96B7BL;
      goto q;
    }
  }
}

int main() {}
