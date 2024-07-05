unsigned g;
int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;
unsigned fn2() {
  int r[5];

  if (h2)
    return 0xC3L;

  g = *(r + i);
  return 0xC3L;
}

int main() {
  fn2();
  return 0;
}