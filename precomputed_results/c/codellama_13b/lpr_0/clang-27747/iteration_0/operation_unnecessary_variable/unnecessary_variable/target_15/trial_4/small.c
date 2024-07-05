
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
  i.d = l.d | -(l.h && l.d) - 165;
}

int main() {
  fn1();
  return 0;
}
