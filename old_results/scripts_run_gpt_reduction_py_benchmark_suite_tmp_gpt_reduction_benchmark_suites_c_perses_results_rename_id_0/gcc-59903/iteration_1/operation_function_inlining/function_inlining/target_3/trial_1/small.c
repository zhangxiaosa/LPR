#include <stdio.h>

typedef unsigned char unsigned_char;
typedef unsigned e;

typedef struct {
  int j;
  int k;
  int l;
} i;

e m[4];
i n[2];

typedef struct {
  int p1;
  i p2;
  unsigned p3;
  short p4;
} fn2_params;

i fn2_inline(fn2_params params) {
  i v = {0x15L, -5L};
  int w;
  int a;

  if (params.p4 ^ v.k)
    ;
  else
    v = n[1];

  for (; w; w += 1)
    for (params.p3 = 0; params.p3 <= 39; ++params.p3)
      for (params.p2.j = 0; params.p2.j <= 2; params.p2.j += 1) {
        n[0] = v;
        v.l = m[params.p2.j];

        if (!n[0].j)
          ;
        else {
          w = params.p2.k && ((n[0].l > 2) || (n[0].l << 2));
          for (; a; a += 4)
            n[0] = v;
        }
      }
  return params.p2;
}

unsigned_char fn3_inline(unsigned_char p1) {
  unsigned_char q[7][7];
  i r;
  unsigned s;

  fn2_params fn2_args;
  fn2_args.p1 = p1;
  fn2_args.p2 = r; // Default initialization
  fn2_args.p3 = s; // Default initialization
  fn2_args.p4 = q[0][0]; // Default initialization

  fn2_inline(fn2_args);

  if (p1)
    ;

  return p1;
}

int main() {
  // Variable declarations inline

  // Variable initialization inline

  // fn3_inline body

  return 0;
}