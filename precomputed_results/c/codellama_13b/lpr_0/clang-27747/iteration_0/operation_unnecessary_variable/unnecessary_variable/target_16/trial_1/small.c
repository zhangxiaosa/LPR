
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
  i.d = l.d;
}

int main() {
  fn1();
  return 0;
}
