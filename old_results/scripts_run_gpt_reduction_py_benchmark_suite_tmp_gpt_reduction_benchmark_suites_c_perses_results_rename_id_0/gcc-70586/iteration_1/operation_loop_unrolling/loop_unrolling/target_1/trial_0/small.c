#include <stdio.h>

int fn2(int p1, unsigned p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1 + p2; }

int o;
int p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t2;

static unsigned fn7(short);
unsigned fn7(short p1) {
  int ac;
  ac = fn3(p1, o);
  if (s) {
    int ad;
    unsigned af;
    for (; p1; --p1) {
      ;
    }
    unsigned ah;
    int ag[8][6][5] = {1L};
    unsigned remaining_iterations = 49 - 8 * 6; // Remaining iterations after unrolled loop
    for (af = 0; af <= remaining_iterations; af += 8 * 6) {
      if (fn2(p1, ag[6][5][0] + p1 || p1 && fn3(ad = fn3(p1, 0xBC2AB98CL), 9))) {
        ;
      } else {
        ah = ac;
        if (!r) {
          printf("l_1179=%%lld\n", ad);
          break;
        }
      }
      // Unrolled loop body (6 iterations at a time)
      // Iteration 1
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
      p = p1;
      // Iteration 2
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
      p = p1;
      // Iteration 3
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
      p = p1;
      // Iteration 4
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
      p = p1;
      // Iteration 5
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
      p = p1;
      // Iteration 6
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
      p = p1;
    }

    // Execute remaining iterations (less than 6)
    for (; af <= 49; af = fn5(af, 8)) {
      if (fn2(p1, ag[6][5][0] + p1 || p1 && fn3(ad = fn3(p1, 0xBC2AB98CL), 9))) {
        ;
      } else {
        ah = ac;
        if (!r) {
          printf("l_1179=%%lld\n", ad);
          break;
        }
      }
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
      p = p1;
    }
  } else {
    unsigned aj[3];
    t2 = fn3(aj[1], q);
  }
  return p1;
}

int main() {
  if (fn7(1)) {
    ;
  }
}
