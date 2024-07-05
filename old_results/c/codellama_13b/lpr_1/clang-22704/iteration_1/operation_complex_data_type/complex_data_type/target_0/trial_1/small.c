
struct c {
  int e;
};

struct c f;

int e;

int fn1() {
  if (f.e)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  e = 5;
  fn1();
  return 0xEEACFBBF;
}

int main() {}
