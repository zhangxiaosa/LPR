unsigned g;
int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  int r[5];

  // First iteration
  if (h2)
    return 0xC3L;
  g = *(r + i);

  // Second iteration
  if (h2)
    return 0xC3L;
  g = *(r + i);

  // Third iteration
  if (h2)
    return 0xC3L;
  g = *(r + i);

  // ...

  // Continue unrolling as per the required number of iterations

  return 0xC3L;
}

int main() {
  fn2();
}