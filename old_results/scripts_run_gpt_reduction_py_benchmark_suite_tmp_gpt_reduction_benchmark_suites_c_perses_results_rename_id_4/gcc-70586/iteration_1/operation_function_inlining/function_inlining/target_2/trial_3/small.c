#include <stdio.h>

int fn2(int p1, unsigned p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned fn4(unsigned p1, int p2) {}

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

int p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t2;
static unsigned fn7(short);
unsigned fn7(short p1) {
  int ai;
  ai = fn3(p1, p);
  if (s) {
    unsigned af;
    for (; p1; --p1)
      ;
    for (af = 0; af <= 49; af = af + 8) {
      int ag[8][6][5] = {1L};
      unsigned ah;
      if (fn2(p1, ag[6][5][0] + p1 || p1 && (({
                                                  unsigned p1 = ai;
                                                  int p2 = 9;
                                                  // Body of fn4
                                              }))))
        ;
      else {
        ah = ai;
        if (!r)
          break;
      }
      p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
                   4294967287UL,
               ah);
      p = p1;
      ai = fn3(0x7D765DB6L, p);
    }
  } else
    t2 = fn3(fn3(p1, q), 0x9CFB623FL);
  return p1;
}

int main() {
  {
    short p1 = 1;
    int ai;
    ai = fn3(p1, p);
    if (s) {
      unsigned af;
      for (; p1; --p1)
        ;
      for (af = 0; af <= 49; af = af + 8) {
        int ag[8][6][5] = {1L};
        unsigned ah;
        if (fn2(p1, ag[6][5][0] + p1 || p1 && (({
                                                    unsigned p1 = ai;
                                                    int p2 = 9;
                                                    // Body of fn4
                                                }))))
          ;
        else {
          ah = ai;
          if (!r)
            break;
        }
        p1 = fn6(0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
                     4294967287UL,
                 ah);
        p = p1;
        ai = fn3(0x7D765DB6L, p);
      }
    } else
      t2 = fn3(fn3(p1, q), 0x9CFB623FL);
  }
}