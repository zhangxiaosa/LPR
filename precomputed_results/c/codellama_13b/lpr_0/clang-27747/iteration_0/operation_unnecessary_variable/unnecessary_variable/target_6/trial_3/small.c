
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int fn1() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  i.d = 0;
}

int main() {
  struct c k;
  k.d = 24;
  k.e = 6738;
  k.h = 1;
  fn1();
  return 0;
}
