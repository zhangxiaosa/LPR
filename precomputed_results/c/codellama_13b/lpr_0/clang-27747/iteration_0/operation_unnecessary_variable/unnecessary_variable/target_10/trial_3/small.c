
struct c {
  int d : 18;
  int e;
  int h;
};

struct c i;
struct c j;

int fn1() {
  int m = j.e;
  int n = j.h && {24, 6738, 165}.d;
  int o = {24, 6738, 165}.d;
  i.d = o | -(j.h && {24, 6738, 165}.d) - n;
}

int main() {
  fn1();
  return 0;
}
