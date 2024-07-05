int i_d;
unsigned int i_e;
unsigned int i_f;
signed int i_g;
signed int i_h;

int j_d;
unsigned int j_e;
unsigned int j_f;
signed int j_g;
signed int j_h;

int main() {
  int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  int m = j_e;

  l_d = j_e;

  int n = j_h && l_d;

  int o = l_d;

  signed int p = o | -(l_f && l_d) - n;

  i_g = p;
}