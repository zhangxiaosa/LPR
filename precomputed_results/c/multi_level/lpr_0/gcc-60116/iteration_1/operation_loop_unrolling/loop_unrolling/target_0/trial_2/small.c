#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }

int v;
unsig... 