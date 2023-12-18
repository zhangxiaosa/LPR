#include <stdio.h>

short fn2(short p1, unsigned p2) {
  return p1;
}

unsigned fn4(unsigned p1, int p2) {
  // Function body of `fn4`
}

short o;
short p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
int u[6];

static int fn7(short);

static int fn8() {
  if (fn7(1))
    ;
}

int fn7(short p1) {
  int ac;
  ac = p1;  // Inlined `fn3` call with its body.
  if (s) {
    int ad;
    unsigned af;
    for (; p1; --p1)
      ;
    for (af = 0; af <= 49; af = af + 8) {
      int ag[8][6][5] = {1L};
      unsigned ah;
      if (p1) {  // Inlined `fn2` call with its body.
        // Inlined `fn4` call with its body.
        if (ag[6][5][0] + p1 || p1 && (o % 9) == 0) {
          // Empty statement block.
        } else {
          ah = ac;
          if (!r) {
            printf("l_1179=%lld\n", (long long)ad);
            break;
          }
        }
      }
      p1 = (0x60781BCDL >= (o > 0xB5L != p1) != p1 ^ 4294967287UL) - ah;
      p = p1;
      ac = 0x7D765DB6L % u[4];
    }
  } else {
    t[2][0] = (0 > q) != 0x9CFB623FL;
  }
  return p1;
}

int main() {
  fn8();
}