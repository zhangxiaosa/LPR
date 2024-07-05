#include <stdio.h>

struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c j;

int main() {
  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;
  
  j.e = l_e;
  
  signed int n = j.h && l_d;
  
  j.g = l_d | -(l_f && l_d) - n;
}
