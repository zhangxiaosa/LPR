
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

int main() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int p = l.d | -(l.g && l.d) - n;
  i.g = p;
}

// Decomposition of `struct c` into primary data types
int d = 24;
int e = 6738;
int g = 165;
int h;

// Decomposition of `i`
int i_d = 24;
int i_e = 6738;
int i_g = 165;
int i_h = 0;

// Decomposition of `j`
int j_d = 0;
int j_e = 0;
int j_g = 0;
int j_h = 0;

// Decomposition of `l`
int l_d = 24;
int l_e = 6738;
int l_g = 165;
int l_h = 0;

// Decomposition of `m`
int m = j_e;

// Decomposition of `n`
int n = j_h && l_d;

// Decomposition of `p`
int p = l_d | -(l_g && l_d) - n;

// Decomposition of `i`
i_g = p;
