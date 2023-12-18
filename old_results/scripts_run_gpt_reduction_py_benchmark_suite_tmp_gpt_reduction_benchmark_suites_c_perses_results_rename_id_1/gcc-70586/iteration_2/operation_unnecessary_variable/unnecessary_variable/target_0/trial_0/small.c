int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

static int r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
static int fn7(short p) {
  if (s) {
    unsigned af = 0;
    for (; af <= 49; af += 8) {
      if (p && fn3(p, 0xBC2AB98C))
        ;
      else if (!r) {
        printf("l_1179=%lld\n", (long long)fn3(p, 0xBC2AB98C));
        break;
      }
      p = (0x60781BCD >= fn3(fn3(0x809C, p) > 0xB5L, p) != p ^ 4294967287UL) - fn3(p, 0);
    }
  } else
    t[2][0] = fn3(fn3(p, p), 0x9CFB623F);
  return p;
}

static int fn8() {
  if (fn7(1))
    ;
}

int main() { fn8(); }