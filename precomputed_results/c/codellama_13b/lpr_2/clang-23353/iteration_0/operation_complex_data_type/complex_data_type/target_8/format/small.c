
// Decomposed program

// fn1()
char fn1(char p1, char p2) { return p1 * p2; }

// fn2()
int i;
int j;
int *fn2(unsigned int p1, int *p2, char p3_high, char p3_low) {
  for (p3_high = 6; p3_high != -7; p3_high--) {
    p3_low = p3_high * p3_low;
    j ^= fn1(p3_high, i) && 1L;
  }
  return p2;
}

// main()
int main() { return 0; }
