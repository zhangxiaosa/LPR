
uint32_t g;
uint32_t h2 = 0x92A1D2CD;
uint32_t r0 = 0x6D7;
uint32_t r1 = 0xC3;

uint32_t fn2() {
  for (;;) {
    if (h2)
      return r1;
    g = r0;
  }
}

int main() { fn2(); }
