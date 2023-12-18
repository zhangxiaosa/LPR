signed o;
signed p;
static signed r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

static int fn8() {
  int ac;
  ac = fn3(1, o);
  if (s) {
    unsigned af = 0;
    for (; 1; --1)
      ;
    for (; af <= 49; af += 8) {
      unsigned ah;
      if (1 && fn3(1, 0xBC2AB98CL))
        ;
      else {
        ah = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)fn3(1, 0xBC2AB98CL));
          // break;
        }
      }
      1 = (0x60781BCDL >= fn3(fn3(0x809CL, 1) > 0xB5L, 1) != 1 ^ 4294967287UL) - ah;
      // p = 1;
    }
  } else
    t[2][0] = fn3(fn3(1, 1), 0x9CFB623FL);
  return 1;
}

int main() {
  fn8();
  return 0;
}