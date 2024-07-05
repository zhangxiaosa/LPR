char fn1(int p1, int p2) { return p1 * p2; }

int h;
int i;

int* fn2(unsigned int p1, int* p2, unsigned int p3) {
  for (p3 = 6; p3 != -7; p3--)
    h ^= fn1(p3, i) && 1L;
  return p2;
}

int main() { return 0; }