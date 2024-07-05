#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(int p1, int p2) { return p2; }

long long fn8(long p1, long long p2) { return p1 + p2; }

int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
int ah;
int aj;
long ak;
int al;
int am = 0x41AEA787L;
int ao;
int ap;

int fn12() {
  int au_0_boolean;
  int au_0_negated_boolean;
  long long au_0_fn8_result;
  int au_0_final;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      au_0_boolean = fn3(aj, fn2(ap, 1)) != 0;
      au_0_negated_boolean = ~(au_0_boolean);
      au_0_fn8_result = fn8(au_0_negated_boolean, ak);
      au_0_final = au_0_fn8_result && 0x57;

      if (w) {
        v = am;
        ag[3] = au_0_final;
      } else
        ao = au_0_final;
    }

    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}