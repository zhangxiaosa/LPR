
int j_h;
int n;
int j_e;
short i_g;

struct c {
  int d : 18;
  int e;
  int f;
};

int main() {
  struct c l = {24, 6738, 165};
  int l_d = l.d;
  int l_f = l.f;
  int l_e = l.e;
  l_d = j_e;
  n = j_h && l_d;
  i_g = l_d | -(l_f && l_d) - n;
}
