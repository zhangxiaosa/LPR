
#include <stdio.h>

typedef unsigned char u_char;

void checksum_fn(u_char checksum, int value) {
  printf("checksum = %X\n", checksum);
}

int subtract_fn(u_char x, u_char y) {
  return x - y;
}

int subtract_fn_2(u_char x, u_char y) {
  return x - y;
}

int subtract_fn_3(u_char x, u_char y) {
  return x - y;
}

int subtract_fn_4(u_char x, u_char y) {
  return x - y;
}

u_char p;

void assign_fn(u_char x, char *y, int z) {
  p = x;
}

int t[2];
u_char u[2];
int v[2];
u_char w[2];
int ab[2];
u_char ac[2] = {1L, 2L};
int checksum_fn_2(u_char x, u_char y);
int checksum_fn_3(u_char x, int y, int z, int w);
int checksum_fn_4(u_char x, int y, u_char z, int w);

int checksum_fn_2() {
  int ae = 1UL;
  checksum_fn_3(u[0], t[0]);
  return ae;
}

int checksum_fn_3(u_char x, u_char y) {
  int af = 0x2F2F6D26L;
  u_char ag = 248UL;
  checksum_fn_4(2L, ag, y, 1);
  return af;
}

int checksum_fn_4(u_char x, int y, u_char z, int w) {
  int ai = 7L;
  int aj = 1UL;
  checksum_fn_4(ai, aj, x, 0);
  return aj;
}

int checksum_fn_4(u_char x, int y, u_char z, int w) {
  int al = 3L;
  int am = 1L;
  int an = 250UL;
  int ao = 0xBCD1L;
  if (subtract_fn_2(subtract_fn_3(ao, subtract_fn_4(am, an)), y) & 1)
    v[0] = 1UL;
  return al;
}

int main() {
  int ap = 0;
  checksum_fn_2();
  assign_fn(v[0], "g_170", ap);
  checksum_fn(p, ap);
  return 0;
}
