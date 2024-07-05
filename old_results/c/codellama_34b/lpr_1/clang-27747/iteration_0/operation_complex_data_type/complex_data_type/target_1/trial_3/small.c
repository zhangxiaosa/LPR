
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  int m = i.e;
  l.d = m;
  int n = i.h && l.d;
  int o = l.d;
  int p = o | -(l.f && l.d) - n;
  i.g = p;
}

/* Decomposition of `l` into primary data types */
int l_d = 24;
int l_e = 6738;
int l_f = 165;
int l_g = 0;
int l_h = 0;

/* Decomposition of `i` into primary data types */
int i_d = 0;
int i_e = 0;
int i_f = 0;
int i_g = 0;
int i_h = 0;

/* Decomposition of `m` into primary data types */
int m = i_e;

/* Decomposition of `n` into primary data types */
int n = i_h && l_d;

/* Decomposition of `o` into primary data types */
int o = l_d;

/* Decomposition of `p` into primary data types */
int p = o | -(l_f && l_d) - n;

/* Decomposition of `i.g` into primary data types */
int i_g = p;
