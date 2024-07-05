#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  int j_e = j.e;            // Extracting j.e into a separate variable
  l.d = j_e;
  
  int j_h = j.h;            // Extracting j.h into a separate variable
  int n = j_h && l.d;
  
  int l_d = l.d;
  int l_f = l.f;
  
  int l_d_and_l_f = l_f && l_d;
  int neg_l_d_and_l_f = -l_d_and_l_f;
  
  int p = l_d | neg_l_d_and_l_f - n;
  i.g = p;
}
