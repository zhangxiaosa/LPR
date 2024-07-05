unsigned g;

int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  for (;;) {
    if (h2)
      return 0xC3L;

    // r_flat[0x06D7L] is no longer assigned to g
  }
}

int main() { fn2(); }
