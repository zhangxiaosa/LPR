unsigned g;
int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  int r[5];

  if (h2)
    return 0xC3L;

  g = *(r + i);

  if (h2)
    return 0xC3L;

  g = *(r + i);

  if (h2)
    return 0xC3L;

  g = *(r + i);

  // Repeat the above three lines as needed

  return 0xC3L; // Assuming h2 doesn't become non-zero in the unrolled portion
}

int main() {
  fn2();
}
