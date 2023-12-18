int o;
static unsigned r = 0x2A52;
unsigned s = 0x03F238A4;
unsigned t2;

int fn2(signed p1, unsigned p2) {
  return p1;
}

static unsigned fn7(short p1) {
  int optimized_ac = p1;  // Inlined body of fn3: p1

  if (s) {
    unsigned af = 0;

    for (; p1; --p1) {}

    for (; af <= 49; af = af + 8) {
      int ag_flat[240] = {1};
      unsigned ah;

      if (fn2(p1, ag_flat[6] + p1 || p1 && (optimized_ac = p1))) {
      } else {
        ah = optimized_ac;
        if (!r)
          break;
      }

      p1 = (0x60781BCD >= (p1 > 0xB5) != p1 ^ 4294967287) - ah;  // Simplified expression
      p = p1;
      optimized_ac = 0x7D765DB6;
    }
  } else
    t2 = (0 >= (0 > 0) != 0 ^ 4294967287);
  
  return p1;
}

static int fn8() {
  if (fn7(1)) {
  }
}

int main() {
  fn8();
}