
struct c {
  int e;
};

struct c f;

int fn1() {
  if (f.e)
    goto i;
  fn1();
  int j;
  return j;
i:
  f.e = 5;
  fn1();
  return 0xEEACFBBF;
}

int main() {}
