
int main() {
  struct c {
    int d : 18;
    int e;
    int f;
  };
  struct c l = {24, 6738, 165};
  l.d = 24;
  int m = 24 && l.d;
  short i_g = l.d | -(l.f && l.d) - m;
}
