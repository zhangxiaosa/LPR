#include <stdio.h>

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

signed o;
signed p;
short q;
static signed r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];

static int fn7(short p1) {
  int ac;
  ac = fn3(p1, o);
  if (s) {
    unsigned af = 0;
    
    // Unrolled iterations
    for (; p1 >= 4; p1 -= 4) {
      unsigned ah1, ah2, ah3, ah4;
      
      if (p1 && fn3(p1, 0xBC2AB98CL))
        ;
      else {
        ah1 = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)fn3(p1, 0xBC2AB98CL));
          break;
        }
        ah2 = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)fn3(p1 - 1, 0xBC2AB98CL));
          break;
        }
        ah3 = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)fn3(p1 - 2, 0xBC2AB98CL));
          break;
        }
        ah4 = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)fn3(p1 - 3, 0xBC2AB98CL));
          break;
        }
      }
      
      // Update p1
      p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah4;
      p = p1;
    }
    
    // Handle remaining iterations
    for (; p1; --p1) {
      unsigned ah;
      
      if (p1 && fn3(p1, 0xBC2AB98CL))
        ;
      else {
        ah = ac;
        if (!r) {
          printf("l_1179=%lld\n", (long long)fn3(p1, 0xBC2AB98CL));
          break;
        }
      }
      
      // Update p1
      p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - ah;
      p = p1;
    }
  } else
    t[2][0] = fn3(fn3(q, q), 0x9CFB623FL);
  
  return p1;
}

static int fn8() {
  if (fn7(1))
    ;
}

int main() {
  fn8();
  return 0;
}
