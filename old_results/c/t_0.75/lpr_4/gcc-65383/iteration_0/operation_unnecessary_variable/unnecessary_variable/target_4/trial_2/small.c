unsigned g;

int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  if (h2)
    return 0xC3L;

  g = 0;  // Replace r_flat[0x06D7L] with a constant value
}

int main() {
  fn2();
}