
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
  l.d = j_e;
  n = j_h && l.d;
  i_g = l.d | -(l.f && l.d) - n;
}
