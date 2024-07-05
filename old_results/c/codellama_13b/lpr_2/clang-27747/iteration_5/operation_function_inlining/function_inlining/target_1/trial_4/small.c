
int j;
int i;
int m;

inline int get_l_d() {
  return 24;
}

inline int get_l_f() {
  return 165;
}

int main() {
  m = j && get_l_d();
  i = get_l_d() | -(get_l_f() && get_l_d()) - m;
}
