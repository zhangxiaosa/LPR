
int fn1() {
  unsigned j = 0x24F96B7BL;
  int f = 1;
  while (f) {
    j = 1L;
    j = j >> 1L;
    j = j << j;
  }
  int m = j;
q:;
  j = j >> 1L;
  j = j << m;
  goto q;
}

int main() {}
