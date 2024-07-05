
struct c {
  int d;
  unsigned e;
  unsigned f;
  int g;
  int h;
};

struct c i;
struct c j;

int fn1() {
  int l_d;
  unsigned l_e;
  unsigned l_f;
  int l_g;
  int l_h;

  l_d = 24;
  l_e = 6738;
  l_f = 165;
  l_g = j.g;
  l_h = j.h;

  int m = l_e;
  l_d = m;
  int n = l_h && l_d;
  int o = l_d;
  int p = o | -(l_f && l_d) - n;
  i.g = p;
}

int main() {
  // ...
}
