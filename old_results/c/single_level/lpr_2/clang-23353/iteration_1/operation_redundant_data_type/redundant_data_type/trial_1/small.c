unsigned char fn1(unsigned char p1, unsigned char p2) { return p1 * p2; }

int i;
signed int j_h;

int main() {
  unsigned char p3;
  unsigned int temp;

  for (p3 = 6; p3 != -7; p3--) {
    temp = fn1(p3, i) && 1L;
    j_h ^= temp;
  }

  return 0;
}
