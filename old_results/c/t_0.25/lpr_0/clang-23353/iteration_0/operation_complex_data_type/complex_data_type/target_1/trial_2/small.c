char fn1(char p1, char p2) { return p1 * p2; }

int i;
signed int h;

int *p2_ptr;
int p2_value;

int *fn2(unsigned p1, int *p2, char p3) {
  p2_ptr = p2;
  for (p3 = 6; p3 != -7; p3--)
    h ^= fn1(p3, i) && 1L;
  p2_value = *p2_ptr;
  return p2_ptr;
}

int main() { return 0; }