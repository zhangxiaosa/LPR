
<SYS>

int main() {
  int i;
  unsigned j = 0x24F96B7BL;
  unsigned k;
  for (int f = 0; f < 3; f++) {
    for (unsigned int j = 0x24F96B7BL; j; --j) {
      // unroll the loop 3 times
      k = k >> 1L;
      i = n;
      if (i)
        k = k << j;
    }
  }
}
