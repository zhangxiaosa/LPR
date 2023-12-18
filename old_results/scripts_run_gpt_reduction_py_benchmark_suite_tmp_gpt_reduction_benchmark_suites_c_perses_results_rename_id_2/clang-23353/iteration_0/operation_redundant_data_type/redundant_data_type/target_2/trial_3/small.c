char fn1(char p1, char p2) {
  return p1 * p2;
}

int i;
signed int j;

int *fn2(unsigned int p1, signed int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2;
}

int main() {
  // Optimized code for variable 'c' goes here
}