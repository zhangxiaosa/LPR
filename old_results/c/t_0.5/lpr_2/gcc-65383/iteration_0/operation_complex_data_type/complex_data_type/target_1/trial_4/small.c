unsigned g;
unsigned h0 = 0x92A1D2CDL;
unsigned h1 = 0x92A1D2CDL;
unsigned h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  for (;;) {
    unsigned q = 0xC3L;
    if (h2)
      return q;
    g = 0; // Modified assignment for g
  }
}

int main() { fn2(); }.