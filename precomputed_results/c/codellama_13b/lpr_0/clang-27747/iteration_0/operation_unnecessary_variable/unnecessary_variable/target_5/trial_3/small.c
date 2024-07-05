c
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int fn1() {
  struct c l = {24, 6738, 165};
  l.d = 6738;
  int o = l.d;
  int k = l.h;
  i.d = o | -(k && l.d) - 165;
}

int main() {
  struct c k;
  k.d = 24;
  k.e = 6738;
  k.h = 1;
  fn1();
  return 0;
}
