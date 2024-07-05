
struct c {
  int d;
  long e;
};

int d;
long e;

int fn1() {
  int h = 6;
  if (e) {
    goto i;
  }
  fn1();
  int j = 0xEEACFBBF;
  return j;
i:
  d = h;
  fn1();
  return j;
}

int main() {}
