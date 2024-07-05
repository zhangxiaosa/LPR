typedef int b;

int d;
unsigned int e;
unsigned int f;
int g;
int h;

int i_d;
unsigned int i_e;
unsigned int i_f;
int i_g;
int i_h;

int j_d;
unsigned int j_e;
unsigned int j_f;
int j_g;
int j_h;

b main() {
  int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  int m = j_e;
  l_d = m;

  int n = j_h && l_d;

  int o = l_d;

  int p = o | -(l_f && l_d) - n;

  i_g = p;
}