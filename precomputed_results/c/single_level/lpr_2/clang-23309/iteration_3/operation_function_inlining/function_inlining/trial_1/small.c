#include <stdio.h>
unsigned p;
unsigned u;
long v;
short w;

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

void fn7(int p1) { p = p1; }

void fn8(int p1) { fn7(p1); }

void fn9(unsigned p1, char *p2) { fn8(p1); }

unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4) { long ai = 7L; short aj = 1UL; int al = 3L; long am = 1L; int an; short ao; if (w = 3; w; w -= 1) { if (an = 250UL) { fn6(am, an); fn4(p, 0xECL); fn3(ao, fn2(ao, p1)); } } return aj; }

short fn12(int p1, int p2, unsigned char p3, short p4, unsigned p5) { int al = 3L; long am = 1L; int an; short ao = 0xBCD1L; if (w = 3; w; w -= 1) { an = 250UL; p2 = p1 || (an = w) == 0x294A85636008822DLL; if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL) v = 1UL; } return al; }

int main() { int ap = 0; int af = 0x2F2F6D26L; unsigned ag = 248UL; long ai = 7L; short aj = 1UL; int an; short ao = 0xBCD1L; fn11(2L, ag, ap, 1); p = af; fn1(p, ap); return 0; }
