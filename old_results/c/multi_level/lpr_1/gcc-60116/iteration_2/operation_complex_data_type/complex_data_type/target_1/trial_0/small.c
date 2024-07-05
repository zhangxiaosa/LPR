#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn5(int p1, int p2) { return 0x41AEA787L; }
unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }
long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned f;
unsigned w = 0xDC6F3D13L;
long long ag[4];
int ah;
int ai;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

int fn12() {
  int au_000, au_001, au_002, au_003, au_004, au_005, au_006, au_007, au_008, au_009, au_010, au_011, au_012, au_013, au_014, au_015, au_016, au_017, au_018, au_019;
  int au_100, au_101, au_102, au_103, au_104, au_105, au_106, au_107, au_108, au_109, au_110, au_111, au_112, au_113, au_114, au_115, au_116, au_117, au_118, au_119;
  int au_200, au_201, au_202, au_203, au_204, au_205, au_206, au_207, au_208, au_209, au_210, au_211, au_212, au_213, au_214, au_215, au_216, au_217, au_218, au_219;
  int au_300, au_301, au_302, au_303, au_304, au_305, au_306, au_307, au_308, au_309, au_310, au_311, au_312, au_313, au_314, au_315, au_316, au_317, au_318, au_319;
  int au_400, au_401, au_402, au_403, au_404, au_405, au_406, au_407, au_408, au_409, au_410, au_411, au_412, au_413, au_414, au_415, au_416, au_417, au_418, au_419;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn6(aq, fn5(ai, au_419 = fn8(~(fn2(ap, 1L) != 0), ak) && 0x57L)) > 2)) {
        f = am;
        ag[3] = au_419;
      } else
        ao = au_419;
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}
