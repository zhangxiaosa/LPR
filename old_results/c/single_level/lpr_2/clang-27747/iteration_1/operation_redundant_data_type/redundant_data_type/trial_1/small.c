struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};
int i_d;
unsigned i_e;
unsigned i_f;
signed i_g;
signed i_h;
int j_d;
unsigned j_e;
unsigned j_f;
signed j_g;
signed j_h;
int main() {
  int l_d = 24;
  unsigned l_e = 6738;
  unsigned l_f = 165;
  int m = j_e;
  l_d = m;
  int n = j_h && l_d;
  signed p = l_d | -(l_f && l_d) - n;
  i_g = p;
}