typedef char original_b;

struct c {
  int d;
  int e;
};

struct c f;

original_b fn1() {
  int h = 6L;
  if (f.e)
    goto i;
  fn1();
  return (original_b)j;
i:
  f.d = h;
  fn1();
  original_b j = 0xEEACFBBFL;
  return (original_b)j;
}

int main() {}
