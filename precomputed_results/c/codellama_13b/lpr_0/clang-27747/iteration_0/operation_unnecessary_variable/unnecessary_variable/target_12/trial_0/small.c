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
  l.d = j.e;
  int n = j.h && l.d;
  int o = l.d;
  i.d = o | -(l.h && l.d) - n;
}

int main() {
  fn1();
  return 0;
}
