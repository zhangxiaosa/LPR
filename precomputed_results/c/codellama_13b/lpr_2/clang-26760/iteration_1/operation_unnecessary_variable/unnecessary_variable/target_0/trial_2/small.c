
int fn1() {
  unsigned j = 0x24F96B7BL;
  while (j) {
    j = 1L;
    j = j >> 1L;
    j = j << j;
  }
}

int main() {}
