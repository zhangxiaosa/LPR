#include <stdio.h>

char fn2_p1;
int fn2_p2;

short fn3_p1;
short fn3_p2;

int g;
int u;
int v_element;

int fn10_p1;
int fn10_p2;
int fn10_p3;
int fn10_p4;
int fn10_d_;

short fn11_result;

int main_j_;


char fn2(short p1, int p2) {
  return (char)p1;
}

short fn3(short p1, short p2) {
  return p2;
}

int fn10(int p1, int p2, int p3, int p4) {
  fn10_d_ = 2;
  for (; u < 51; ++u) {
    v[0][3] = fn3(4, (short)fn10_d_);
    fn10_d_ = (int)fn2(v[0][3], 3) + 0x9EE7F9D1C772505BLL;
  }
  return 3;
}

short fn11() {
  fn10(6, 255UL, 1, 0);
  return 0;
}

int main() {
  
  fn11_result = fn11();
  
  for (main_j_ = 0; main_j_ < 4; main_j_++) {
    g = v[0][main_j_];
  }
  
  printf("checksum = %Xu\n", g);
  return 0;
}
