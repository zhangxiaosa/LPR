
int j_h;
int n;
struct c {
  int d : 18;
  int e;
  int f;
};
short i_g;
int j_e;
int main() {
  struct c l = {24, 6738, 165};
  l.d = j_e;
  n = j_h && l.d;
  i_g = l.d | -(l.f && l.d) - n;

  // Decomposing the variables into primary data types:
  int l_d = l.d;
  int l_e = l.e;
  int l_f = l.f;
  int j_e_ = j_e;
  int j_h_ = j_h;

  // Optimizing the variable l_e:
  l_e = j_h_ && l_d;

  // Recomposing the variables:
  l.d = l_d;
  l.e = l_e;
  l.f = l_f;
  j_e = j_e_;
  j_h = j_h_;

  return 0;
}
