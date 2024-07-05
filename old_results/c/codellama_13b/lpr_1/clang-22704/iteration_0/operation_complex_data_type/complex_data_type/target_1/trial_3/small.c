c
#include <stdio.h>

int c_d;
int c_e;
int f_d;
int f_e;
int h_array[6];
int fn1_j;
int main_j;

int fn1() {
  if (f_e)
    goto i;
  fn1();
  fn1_j = 0xEEACFBBFL;
  return fn1_j;
i:
  f_d = h_array[5];
  fn1();
  fn1_j = 0xEEACFBBFL;
  return fn1_j;
}

int main() {
  main_j = fn1();
  printf("The value of main_j is %d\n", main_j);
  return 0;
}
