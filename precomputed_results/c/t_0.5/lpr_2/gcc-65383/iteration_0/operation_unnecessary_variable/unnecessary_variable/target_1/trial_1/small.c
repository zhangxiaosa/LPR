unsigned g;
unsigned h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  if (h2)
    return 0xC3L;
  g = 0x06D7L;
}

int main() { fn2(); }