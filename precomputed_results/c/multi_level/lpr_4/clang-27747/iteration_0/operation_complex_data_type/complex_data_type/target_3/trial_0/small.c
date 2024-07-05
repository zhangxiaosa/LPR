typedef int b;

signed int d;
unsigned int e;
unsigned int f;
signed int g;
signed int h;

signed int i_d;
unsigned int i_e;
unsigned int i_f;
signed int i_g;
signed int i_h;

signed int j_d;
unsigned int j_e;
unsigned int j_f;
signed int j_g;
signed int j_h;

int main() {
  d = 0;
  e = 0;
  f = 0;
  g = 0;
  h = 0;

  i_d = 0;
  i_e = 0;
  i_f = 0;
  i_g = 0;
  i_h = 0;

  j_d = 0;
  j_e = 0;
  j_f = 0;
  j_g = 0;
  j_h = 0;

  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  d = l_d;
  int m = j_e;
  l_d = j_e;

  int n = (j_h != 0) && (l_d != 0);
  int o = l_d;
  signed int p = o | -(l_f != 0 && l_d != 0) - n;
  i_g = p;

  return 0;
}