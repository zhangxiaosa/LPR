
struct c {
  int d : 18;
  int e;
  unsigned f;
};

int i_g;
int j_e;
int j_h;

inline int fn1() {
  struct c l = {24, 6738, 165};
  l.d = j_e;
  int n = j_h && l.d;
  i_g = l.d | -(l.f && l.d) - n;
}

int main() {
  fn1();
}
