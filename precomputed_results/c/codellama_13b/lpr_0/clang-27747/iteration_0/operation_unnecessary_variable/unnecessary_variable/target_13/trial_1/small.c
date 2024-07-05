
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
  int o = 24;
  i.d = o | -(24 && 165);
}

int main() {
  fn1();
  return 0;
}
