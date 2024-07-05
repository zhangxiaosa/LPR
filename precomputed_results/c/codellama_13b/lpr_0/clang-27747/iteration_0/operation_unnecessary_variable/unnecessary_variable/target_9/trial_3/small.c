
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int fn1() {
  int m = j.e;
  int n = j.h && m;
  int o = m | -(j.h && m) - n;
  i.d = o;
}

int main() {
  fn1();
  return 0;
}
