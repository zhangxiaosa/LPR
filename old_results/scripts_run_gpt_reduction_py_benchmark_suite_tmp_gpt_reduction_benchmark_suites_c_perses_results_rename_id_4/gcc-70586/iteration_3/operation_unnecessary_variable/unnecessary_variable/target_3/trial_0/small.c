int p;
unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;

int fn3(int p1_arg, int p2) {
  return p2 == 0 || p1_arg && p2 ? p1_arg : p1_arg % p2;
}

static unsigned fn7(short);

unsigned fn7(short p1_arg) {
  int ai;
  unsigned af;
  int ag[8][6][5] = {1L};
  unsigned ah;
  ai = fn3(p1_arg, p);

  if (s) {
    --p1_arg;

    for (af = 0; af <= 49; af += 8) {
      if (p1_arg && (ai = fn3(p1_arg, 0xBC2AB98CL), 9)) {
        // Empty statement
      } else {
        if (!r)
          break;
      }
      p1_arg = 0x60781BCDL >= p1_arg != p1_arg ^ 4294967287UL;
      p = p1_arg;
      ai = fn3(0x7D765DB6L, p);
    }
  } else {
    p = fn3(0x7D765DB6L, p1_arg);
  }

  return p1_arg;
}

int main() {
  fn7(1);
}