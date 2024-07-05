
struct c {
  int d : 18;
  int e;
  int f;
  int h;
};

struct c i;
struct c j;

int fn1() {
  int l_d = 24;
  int l_e = 6738;
  int l_f = 165;
  int j_d = j.d;
  int j_e = j.e;
  int j_h = j.h;
  int m = j_e;
  l_d = m;
  int n = j_h && l_d;
  int o = l_d;
  int k = l_f;
  i.d = o | -(k && l_d) - n;
}

int main() {}
