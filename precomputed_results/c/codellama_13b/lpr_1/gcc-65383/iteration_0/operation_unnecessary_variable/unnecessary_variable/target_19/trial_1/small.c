
unsigned g;
unsigned h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static unsigned i = 0x06D7L;

int fn1() {
  if (h[2])
    return 0xC3L;
  g = 0x06D7L;
}

int main() {
  fn1();
}
