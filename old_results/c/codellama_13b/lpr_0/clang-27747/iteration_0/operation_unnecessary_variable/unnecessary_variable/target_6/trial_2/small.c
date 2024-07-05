
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int fn1() {
  struct c l = {24, 6738, 1};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int o = l.d;
  int k = l.h;
  i.d = o | -(k && l.d) - n;
}

int main() {
  struct c k;
  k.d = 24;
  k.e = 6738;
  k.h = 1;
  fn1();
  return 0;
}
