
#include <stdio.h>
#include <stdint.h>

typedef long long checksum;

checksum fn10(checksum p1, checksum p2) {
  checksum af = 0x2F2F6D26L;
  checksum ag = 248UL;
  checksum aj = fn4(fn6(ag, p2), 0xECL);
  return af;
}

checksum fn11(checksum p1, checksum p2, checksum p3, checksum p4) {
  checksum ai = 7L;
  checksum aj = 1L;
  checksum am = fn2(fn3(ai, aj), p4);
  return am;
}

checksum fn12(checksum p1, checksum p2, checksum p3, checksum p4, checksum p5) {
  checksum al = 3L;
  checksum am = 1L;
  checksum an = fn2(fn3(al, am), p5);
  return an;
}

int main() {
  checksum ae = 1UL;
  checksum ap = fn10(ae, ae);
  checksum p = fn11(ap, ap, ap, ae);
  checksum v = fn12(p, p, ap, ae, ae);
  printf("checksum = %X\n", v);
  return 0;
}
