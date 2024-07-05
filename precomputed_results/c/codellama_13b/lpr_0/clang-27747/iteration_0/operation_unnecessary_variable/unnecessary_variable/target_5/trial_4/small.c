
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int fn1() {
  struct c l;
  l.d = j.e;
  l.h = 165;
  i.d = l.d | 1 - j.h;
}

int main() {
  struct c k;
  k.d = 24;
  k.e = 6738;
  k.h = 1;
  fn1();
  return 0;
}
