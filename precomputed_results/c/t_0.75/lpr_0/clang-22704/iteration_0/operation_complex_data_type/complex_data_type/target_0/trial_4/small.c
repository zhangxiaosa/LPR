#include <stdio.h>

struct struct_c {
  int d;
  int e;
};

struct struct_c struct_c_instance;

char fn1() {
  int h_value = 6L;
  if (struct_c_instance.e)
    goto i;

  char fn1_result = fn1();
  char j_value;
  return j_value;

i:
  struct_c_instance.d = h_value;
  char fn1_result = fn1();
  char j_value = 0xEEACFBBFL;
  return j_value;
}

int main() {
  return 0;
}