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
  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  int m = j_e;
  l_d = m;

  int n = j_h && l_d;

  signed int p = l_d | -(l_f && l_d) - n;
  i_g = p;

}