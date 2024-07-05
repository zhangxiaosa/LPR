
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int fn1() {
  int m = j.e;
  i.d = m | -(j.h && m) - (j.h && m);
}

int main() {
  fn1();
  return 0;
}
