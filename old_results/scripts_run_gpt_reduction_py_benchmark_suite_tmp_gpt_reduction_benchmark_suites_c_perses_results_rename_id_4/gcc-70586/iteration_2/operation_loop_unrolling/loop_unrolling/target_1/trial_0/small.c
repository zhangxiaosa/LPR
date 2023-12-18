#include <stdio.h>

int fn3(int p1, int p2) {
  return p2 == 0 || (p1 && p2) ? p1 : p1 % p2;
}

int p;
short q;
unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t2;

unsigned fn7(short p1) {
  int ai;
  ai = fn3(p1, p);
  if (s) {
    unsigned af;
    // Unrolled loop manually
    af = 0;
    int ag[8][6][5] = {1L};
    unsigned ah;
    if (p1, ag[6][5][0] + p1 || p1 && (ai = fn3(p1, 0xBC2AB98CL), 9))
      ;
    else {
      ah = ai;
      if (!r)
        goto end;
    }
    p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
          4294967287UL) -
         ah;
    p = p1;
    ai = fn3(0x7D765DB6L, p);

    af = 8;
    int ag1[8][6][5] = {1L};
    unsigned ah1;
    if (p1, ag1[6][5][0] + p1 || p1 && (ai = fn3(p1, 0xBC2AB98CL), 9))
      ;
    else {
      ah1 = ai;
      if (!r)
        goto end;
    }
    p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
          4294967287UL) -
         ah1;
    p = p1;
    ai = fn3(0x7D765DB6L, p);

    af = 16;
    int ag2[8][6][5] = {1L};
    unsigned ah2;
    if (p1, ag2[6][5][0] + p1 || p1 && (ai = fn3(p1, 0xBC2AB98CL), 9))
      ;
    else {
      ah2 = ai;
      if (!r)
        goto end;
    }
    p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
          4294967287UL) -
         ah2;
    p = p1;
    ai = fn3(0x7D765DB6L, p);

    af = 24;
    int ag3[8][6][5] = {1L};
    unsigned ah3;
    if (p1, ag3[6][5][0] + p1 || p1 && (ai = fn3(p1, 0xBC2AB98CL), 9))
      ;
    else {
      ah3 = ai;
      if (!r)
        goto end;
    }
    p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^
          4294967287UL) -
         ah3;
    p = p1;
    ai = fn3(0x7D765DB6L, p);

  end:
    ;
  } else {
    t2 = fn3(fn3(p1, q), 0x9CFB623FL);
  }
  return p1;
}

int main() {
  if (fn7(1))
    ;
}