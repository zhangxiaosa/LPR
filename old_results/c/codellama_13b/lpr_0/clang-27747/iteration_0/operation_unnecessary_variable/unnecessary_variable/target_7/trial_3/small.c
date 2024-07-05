
struct c {
  int d : 18;
  int e;
};

struct c i;
struct c j;

int fn1() {
  struct c l = {24, 6738, 0};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int o = l.d;
  i.d = o | -(l.h && l.d) - n;
}

int main() {
  struct c k;
  k.d = 24;
  k.e = 6738;
  fn1();
  return 0;
}
