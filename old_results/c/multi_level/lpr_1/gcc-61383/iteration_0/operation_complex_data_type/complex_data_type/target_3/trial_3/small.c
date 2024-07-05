#include <stdio.h>

signed int l;
unsigned int n1;
signed int o;

signed int fn1(signed int p1, signed int p2) { return p2 == 0 ? p1 : p1 % p2; }

int fn3(int p1, int p2) { return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2; }

short fn6(unsigned int n1) { for (; n1 < 12; n1 = fn3(n1, 3)) { int ab; if (0x4F92L < (ab = fn1(o, o), 6)) ; else { signed int ac = 0xE3L; if (o <= ac) ; else if (ab) break; } } return l; }

int main() { fn6(n1); }.
