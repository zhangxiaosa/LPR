
struct c {
  int d : 18;
  int e;
  int h;
};

struct c j;

int fn1() {
  struct c.d = j.e;
}

int main() {
  fn1();
  return 0;
}
