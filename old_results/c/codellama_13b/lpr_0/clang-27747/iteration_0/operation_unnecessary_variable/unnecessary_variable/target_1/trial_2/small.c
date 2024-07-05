
struct c {
  int e;
  int f;
  int h;
};

struct c i;
struct c j;

int fn1() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.e = m;
  int n = j.h && l.e;
  int o = l.e;
  int k = l.f;
  i.e = o | -(k && l.e) - n;
}

int main() {
  struct c k;
  k.e = 24;
  k.f = 6738;
  k.f = 165;
  k.h = 1;
  fn1();
  return 0;
}
