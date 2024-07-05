#include <stdio.h>

int g;
int h;

unsigned fn4(unsigned p2, unsigned short p3, unsigned p4) {
  short ak[8];
  unsigned temp_p2;
  unsigned temp_p4;

  // Unrolled loop
  if (h < 0) {
    if (ak[p3])
      goto end;
    if (ak[p3])
      goto end;
    if (ak[p3])
      goto end;
    if (ak[p3])
      goto end;
    if (ak[p3])
      goto end;
    if (ak[p3])
      goto end;
    if (ak[p3])
      goto end;
    if (ak[p3])
      goto end;
  }

end:
  return g;
}

int fn5() {
  if (fn4(4294967287UL, -7L, g))
    ;
  return g;
}

int main() {
  fn5();
}
