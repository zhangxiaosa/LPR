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

long long fn8(long long p1, long long p2) {
  return p1 + p2;
}

unsigned f_q;

void fn9(p1) {
  f_q = p1;
}

void fn10(p1) {
  fn9(p1);
}

void fn11(long long p1, char *p2, int p3) {
  fn10(p1);
}

int v_b;

unsigned f_w = 0xDC6F3D13L;

long long ag[4];

short ah_a;

char ai_d;

long aj_c;

long long ak_g;

unsigned f_al;

int v_am = 0x41AEA787L;

char an_d;

int ao_b;

unsigned f_ap;

int aq_b;

long fn12() {
  char as_d = 4UL;
  short at_a = 1L;
  int au[5][2][10];
  for (ak_g = 0;;) {
    for (ah_a = 0; ah_a <= 3; ah_a += 1)
      if (f_w >=
          (fn7(
               as_d,
               fn6(
                   aq_b,
                   fn5(
                       ai_d, au[4][1][5] =
                                  fn8(
                                      ~fn4(
                                          fn3(
                                              aj_c, fn2(
                                                         ap_f, at_a)) != 0,
                                          an_d),
                                      ak_g) &&
                                  0x57L))) > 2)) {
        v_b = v_am;
        ag[3] = au[4][1][5];
      } else
        ao_b = au[4][1][5];
    return f_al;
  }
}

int main() {
  int av = 0;
  fn12();
  fn11(v_b, "g_3", av);
  fn1(f_q, av);
  return 0;
}
