
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;

int fn1() {
  i.d = i.e;
}

int main() {
  fn1();
  return 0;
}
