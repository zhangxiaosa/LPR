int d : 18;
int f;
int g;

int i_d : 18;
int i_f;
int i_g;

unsigned j_e;
int j_h;

int main() {
  int l_d : 18 = 24;
  int l_f = 6738;

  l_d = j_e;

  int n = j_h && l_d;
  int p = l_d | -(l_f && l_d) - n;

  i_g = p;
}