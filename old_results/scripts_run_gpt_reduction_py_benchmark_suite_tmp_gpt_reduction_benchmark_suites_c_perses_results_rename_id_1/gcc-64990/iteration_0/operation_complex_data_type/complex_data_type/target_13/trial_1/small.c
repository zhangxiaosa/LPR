#include <stdio.h>

typedef short g_new_type;
typedef unsigned h_type;
typedef short i_type;
typedef int j_type[5][5];
typedef unsigned k_type;
typedef unsigned l_type;
typedef unsigned m_type[9][2][3];
typedef int n_type;
typedef unsigned v_type[6][3][2];
typedef int w_type;

static g_new_type g_new = 0x7EBA;
h_type h = 0xCA;
i_type i;
j_type j;
k_type k = 0xAF7C65D6L;
static l_type l;
m_type m;
n_type n;
v_type v;
w_type w = 0x709BFC8AL;

unsigned fn1(int p1, short p2, int p3, int p4);
int fn2(int p1);
unsigned fn3();

unsigned fn1(int p1, short p2, int p3, int p4) {
  p1 || (m[1][0][1] = p1);
  return 2;
}

int fn2(int p1) {
  unsigned v[6][3][2];
  int w = 0x709BFC8AL;
  for (; i < 6;) {
    if (k)
      break;
    return v[g_new][0][0];
  }
  if (h)
    ;
  else
    return j[g_new][g_new];
  for (; p1;)
    ;
  return w;
}

unsigned fn3() {
  fn1(fn2(0), 7, 7, 0);
  return n;
}

int main() {
  fn3();
}