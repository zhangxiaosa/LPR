
unsigned g;
unsigned h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static unsigned i = 0x06D7L;
int fn1() {
  for (;;) {
    // r is an unused variable, so we can optimize it out by removing it from the program
    // if (h[2])
    //   return 0xC3L;
    g = h[0x06D7L];
    // g is also an unused variable, so we can optimize it out by removing it from the program
  }
}
int main() { fn1(); }
