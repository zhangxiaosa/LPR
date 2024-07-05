
struct c {
  int d : 18;
  int e;
  int f;
};

int i_g;
int j_e;
int j_h;

int main() {
  struct c l;
  l.d = j_e;
  int n = j_h && l.d;
  i_g = l.d | -(l.f && l.d) - n;
}
