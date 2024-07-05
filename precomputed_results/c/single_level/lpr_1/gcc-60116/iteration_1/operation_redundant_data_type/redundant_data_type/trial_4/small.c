#include <stdio.h>

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

short fn2(short p1, short p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

long fn3(long p1, long p2) {
  return p2;
}

char fn4(char p1, cha...