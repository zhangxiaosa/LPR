
struct c {
  int e;
};

struct c f;

int fn1() {
  int j;
  if (f.e)
    goto i;
  fn1();
  return j;
i:
  f.e = 5;
  fn1();
  j = 0xEEACFBBF;
  return j;
}

int main() {}
