#include <stdio.h>

signed o;
signed p;
short q;
static signed r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];

static int fn7(short p1) {
  int ac;
  // inlined function fn3
  // return p2 == 0 || p1 && p2 ? p1 : p1 % p2;
  ac = p2 == 0 || p1 && p2 ? p1 : p1 % p2;

  if (s) {
    unsigned af = 0;
    for (; p1; --p1)
      ;
    for (; af <= 49; af += 8) {
      unsigned ah;
      if (p1 && (p2 == 0xBC2AB98CL || p1 % 0xBC2AB98CL))
        ;
      else {
        ah = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)(p2 == 0xBC2AB98CL || p1 % 0xBC2AB98CL));
          break;
        }
      }
      p1 = (0x60781BCDL >= (0x809CL && (p2 == 0xBC2AB98CL || p1 % 0xBC2AB98CL)) > 0xB5L && (p2 == 0xBC2AB98CL || p1 % 0xBC2AB98CL) ? p1 : p1 % (0x809CL && (p2 == 0xBC2AB98CL || p1 % 0xBC2AB98CL))); 
      p = p1;
    }
  }
  else
    t[2][0] = (0x809CL && 0x809CL) == 0x9CFB623FL || (0x809CL && 0x809CL) % 0x9CFB623FL ? (0x809CL && 0x809CL) : (0x809CL && 0x809CL) % 0x9CFB623FL;
  return p1;
}

int main() {
  if (fn7(1))
    ;
  return 0;
}