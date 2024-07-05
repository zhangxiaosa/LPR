struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  int l_d = i.e;
  int l_f = i.f;
  int l_h = i.h;

  int n = l_h && l_d;

  int l_d_negated = -(l_f && l_d);

  int i_g = l_d | l_d_negated - n;
  i.g = i_g;
}