int fn3(int p1, int p2) { return p2 == 0 || (p1 && p2) ? p1 : p1 % p2; }

int p;
unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
static unsigned fn7(short);
unsigned fn7(short p1) {
  int ai;
  int optimized_ai = 0;
  short p1_val = p1;
  if (s) {
    unsigned af;
    --p1_val;
    for (af = 0; af <= 49; af = af + 8) {
      int ag[8][6][5] = {1L};
      unsigned ah;
      if (p1_val != 0 && (ag[6][5][0][0] + p1_val != 0) || (p1_val != 0 && (optimized_ai = fn3(p1_val, 0xBC2AB98CL), 9)))
        ;
      else {
        ah = optimized_ai;
        if (!r)
          break;
      }
      p1_val = (0x60781BCDL >= (fn3(fn3(0x809CL, p1_val) > 0xB5L, p1_val) != p1_val) ^ 4294967287UL) - ah;
      p = p1_val;
      optimized_ai = fn3(0x7D765DB6L, p);
    }
  } else
    p = fn3(fn3(p1_val, p), 0x9CFB623FL);
  return p1_val;
}

int main() {
  if (fn7(1))
    ;
}