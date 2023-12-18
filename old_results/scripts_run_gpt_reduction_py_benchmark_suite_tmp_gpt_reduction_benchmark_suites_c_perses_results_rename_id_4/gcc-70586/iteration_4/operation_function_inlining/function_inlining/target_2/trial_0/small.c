int p;
unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
int fn3(int p1_arg, int p2) {
  return p2 == 0 || p1_arg && p2 ? p1_arg : p1_arg % p2;
}

int main() {
  int ai;
  unsigned af;
  int ag[8][6][5] = {1L};
  unsigned ah;
  ai = fn3(1, p);  // Inlined fn3 with p1_arg = 1

  if (s) {
    --p;
    for (af = 0; af <= 49; af = af + 8) {
      if (1, ag[6][5][0] + 1 || 1 && (ai = fn3(1, 0xBC2AB98CL), 9))
        ;
      else {
        ah = ai;
        if (!r)
          break;
      }

      p = (0x60781BCDL >= fn3(fn3(0x809CL, 1) > 0xB5L, 1) != 1 ^ 4294967287UL) - ah;
      ai = fn3(0x7D765DB6L, p);
    }
  } else
    p = fn3(fn3(1, p), 0x9CFB623FL);

  return 1;
}