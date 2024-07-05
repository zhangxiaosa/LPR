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

char fn4(char p1, char p2) {
  return p1;
}

char fn5(char p1, int p2) {
  return p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p2;
}

unsigned fn7(unsigned p1, unsigned p2) {
  return p1;
}

long long fn8(long p1, long long p2) {
  return p1 + p2;
}

unsigned q;

void fn11(long p1, char *p2, int p3) {
  q = p1;
}

int v;

unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

int main() {
  int av = 0;
  short at = 1L;
  int au[5][2][10];
  
  ak = 0;
  
  for (;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= ((aq), 0)) {
        v = 0x41AEA787L;
        ag[3] = 0;
      }
    }
    
    return 0;
  }
  
  fn11(v, "g_3", av);
  fn1(q, av);

  return 0;
}
