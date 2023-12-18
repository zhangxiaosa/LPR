#include <stdio.h>

int fn2(signed p1, unsigned p2) {
  return p1;
}

int fn3(int p1, int p2) {
  return p2 == 0 || p1 && p2 ? p1 : p1 % p2;
}

int o;
int p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];

static unsigned fn7(short p1) {
  int ac = fn3(p1, o);
  if (s) {
    int ad;
    unsigned af = 0;

    // Unrolled loop (factor of 4)
    for (; p1 >= 4; p1 -= 4) {
      // Iteration 1
      int ag_flat_1[240] = {1L};
      unsigned ah_1;
      if (fn2(p1, ag_flat_1[6] + p1 || p1 && (ad = fn3(p1, 0xBC2AB98C)))) {
      } else {
        ah_1 = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = (0x60781BCD >= fn3(fn3(p1, p1) > 0xB5, p1) != p1 ^ 4294967287UL) - ah_1;
      p = p1;
      ac = fn3(0x7D765DB6L, p1);

      // Iteration 2
      int ag_flat_2[240] = {1L};
      unsigned ah_2;
      if (fn2(p1 - 1, ag_flat_2[6] + p1 - 1 || p1 - 1 && (ad = fn3(p1 - 1, 0xBC2AB98C)))) {
      } else {
        ah_2 = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = (0x60781BCD >= fn3(fn3(p1 - 1, p1 - 1) > 0xB5, p1 - 1) != p1 - 1 ^ 4294967287UL) - ah_2;
      p = p1;
      ac = fn3(0x7D765DB6L, p1);

      // Iteration 3
      int ag_flat_3[240] = {1L};
      unsigned ah_3;
      if (fn2(p1 - 2, ag_flat_3[6] + p1 - 2 || p1 - 2 && (ad = fn3(p1 - 2, 0xBC2AB98C)))) {
      } else {
        ah_3 = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = (0x60781BCD >= fn3(fn3(p1 - 2, p1 - 2) > 0xB5, p1 - 2) != p1 - 2 ^ 4294967287UL) - ah_3;
      p = p1;
      ac = fn3(0x7D765DB6L, p1);

      // Iteration 4
      int ag_flat_4[240] = {1L};
      unsigned ah_4;
      if (fn2(p1 - 3, ag_flat_4[6] + p1 - 3 || p1 - 3 && (ad = fn3(p1 - 3, 0xBC2AB98C)))) {
      } else {
        ah_4 = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)ad);
          break;
        }
      }
      p1 = (0x60781BCD >= fn3(fn3(p1 - 3, p1 - 3) > 0xB5, p1 - 3) != p1 - 3 ^ 4294967287UL) - ah_4;
      p = p1;
      ac = fn3(0x7D765DB6L, p1);
    }

    // Handle remaining iterations (if any)
    for (; p1; --p1) {
      // Loop body (single iteration)
    }
  } else
    t[2][0] = fn3(fn3(0, q), 0x9CFB623F);

  return p1;
}

static int fn8() {
  if (fn7(1)) {
  }
}

int main() {
  fn8();
}