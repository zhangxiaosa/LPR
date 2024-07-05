
struct c {
  int d;
  int e;
};

int d;
int e;

int fn1() {
  long h = 6;
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

struct c f;

int main() {
  f.d = 0;
  f.e = 0;
  fn1();
  return f.d;
}
