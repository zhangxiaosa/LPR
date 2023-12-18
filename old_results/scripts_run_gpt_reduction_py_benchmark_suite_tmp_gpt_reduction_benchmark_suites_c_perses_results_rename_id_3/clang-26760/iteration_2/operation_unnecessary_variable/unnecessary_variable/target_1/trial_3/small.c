unsigned g;
unsigned fn1() {
  unsigned k = 0;
  unsigned m = 0x24F96B7BL;
  unsigned n = g;

  while (n) {
    k = k >> 1L;
    k = k << m;
    n = g;
  }
}
int main() {}