int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

int p;
static int r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];

int main() {
  if (s) {
    unsigned af = 0;
    for (; af <= 49; af += 8) {
      int p1 = 1;
      if (p1 && fn3(p1, 0xBC2AB98CL))
        ;
      else if (!r) {
        printf("l_1179=%lld\n", (long long)fn3(p1, 0xBC2AB98CL));
        break;
      }
      p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
            4294967287UL) -
           fn3(p1, p);
      p = p1;
    }
  } else
    t[2][0] = fn3(fn3(1, 1), 0x9CFB623FL);
}