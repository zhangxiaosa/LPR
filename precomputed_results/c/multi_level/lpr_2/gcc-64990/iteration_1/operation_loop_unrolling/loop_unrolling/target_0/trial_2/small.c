static short g = 0x7EBAL;
unsigned h = 0xCAL;
short i;
int j[5][5];
unsigned k = 0xAF7C65D6L;
static unsigned l;
unsigned m[9][2][3];
unsigned fn1(int, short);
int fn2(int);
unsigned fn3() {
  fn1(fn2(0), 7);
  return 0;
}
unsigned fn1(int p1, short p2) {
  p1 || (m[1][0][1] = p1);
  return 2;
}
int fn2(p1) {
  unsigned v[6][3][2];
  for (i = 0;;) {
    if (k)
      break;
    return v[g][l + 1][l];
  }
  if (h)
    ;
  else
    return j[g][g];
  // Loop unrolling starts
  if (p1) {
    // Unrolled iteration 1
  }
  if (p1) {
    // Unrolled iteration 2
  }
  if (p1) {
    // Unrolled iteration 3
  }
  if (p1) {
    // Unrolled iteration 4
  }
  if (p1) {
    // Unrolled iteration 5
  }
  if (p1) {
    // Unrolled iteration 6
  }
  // Loop unrolling ends
  return 0x709BFC8AL;
}
int main() { fn3(); }
