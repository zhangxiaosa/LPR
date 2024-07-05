c
struct c {
  int d;
  int e;
  unsigned f;
  int g;
  int h;
};

int j_d;
int j_e;
int j_g;
int j_h;

int fn1() {
  struct c l = {24, 6738, 165};
  int m = j_e;
  l.d = m;
  int p = l.d | -(l.f && l.d) - (j_h && l.d);
  l.g = p;
}

int main() {}
