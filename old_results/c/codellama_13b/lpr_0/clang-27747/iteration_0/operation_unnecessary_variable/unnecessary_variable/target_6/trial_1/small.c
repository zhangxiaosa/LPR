
struct c {
  int d : 18;
  int e;
};

struct c i;
struct c j;

int fn1() {
  struct c l = {24, 6738};
  l.d = j.e;
  i.d = l.d | -(l.h && l.d);
}

int main() {
  struct c k;
  k.d = 24;
  k.e = 6738;
  k.h = 1;
  fn1();
  return 0;
}
