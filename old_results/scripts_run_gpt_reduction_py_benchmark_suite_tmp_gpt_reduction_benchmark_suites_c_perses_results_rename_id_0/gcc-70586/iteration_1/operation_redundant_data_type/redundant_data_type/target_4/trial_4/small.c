#include <stdio.h>

int fn2(int p1, unsigned p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1 + p2; }

int o;
int p;
// short q;  // Eliminated short q

static unsigned r = 0x2A52L;
int s = 0x03F238A4L;  // Substituted unsigned s with int s
unsigned t2;

static unsigned fn7(short);
int fn7(short p1) {  // Substituted unsigned fn7 with int fn7
  int ac;
  ac = fn3(p1, o);
  if (s) {
    int ad;
    int af;  // Substituted unsigned af with int af
    for (; p1; --p1)
      ;
    for (af = 0; af <= 49; af = fn5(af, 8)) {  // Substituted unsigned af with int af
      int ag[8][6][5] = {1L};
      int ah;  // Substituted unsigned ah with int ah
      if (fn2(p1, ag[6][5][0] + p1 || p1 && fn3(ad = fn3(p1, 0xBC2AB98CL), 9)))
        ;
      else {
        ah = ac;
        if (!r) {
          printf("l_1179=%%lld\n", ad);
          break;
        }
      }
      p1 = (0x60781BCDL >= fn3(fn3(p1, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) -
           ah;
      p = p1;
    }
  } else {
    int aj[3];  // Substituted unsigned aj with int aj
    t2 = fn3(aj[1], p);  // Substituted unsigned t2 with int t2, substituted q with p
  }
  return p1;
}

int main() {
  if (fn7(1))
    ;
}