#include <stdio.h>

void fn1(unsigned p1, int p2);

short fn2(short p1, short p2); 

long fn3(long p1, long p2);

char fn4(char p1, char p2);

char fn5(char p1, int p2);

unsigned fn6(unsigned p1, unsigned p2);

unsigned fn7(unsigned p1, unsigned p2);

long long fn8(long long p1, long long p2);

unsigned q;
unsigned wide = 0xDC6F3D13L; 

long long ag[4]; 

short ah;

char ai; 

long aj;

long long ak; 

unsigned al; 

int am = 0x41AEA787L;

char an;

int ao;

unsigned ap;

int aq;

long fn12();

int main(){
  int av = 0;
  fn12();
  fn11(v, "g_3", av);
  fn1(q, av);
  return 0;
}

void fn1(unsigned p1, int p2){
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

long long fn8(long long p1, long long p2) {
  return p1 + p2;
}

void fn9(p1) {
  q = p1;
}

void fn10(p1) {
  fn9(p1);
}

void fn11(long long p1, char *p2, int p3) {
  fn10(p1);
}

long fn12() {
  unsigned wide = 4UL;
  short at = 1L;
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(
               wide,
               fn6(
                   aq,
                   fn5(
                       ai, au[4][1][5] =
                                  fn8(
                                      ~fn4(
                                          fn3(
                                              aj, fn2(
                                                         ap, at)) != 0,
                                          an),
                                      ak) &&
                                  0x57L))) > 2)) {
        v = am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}
