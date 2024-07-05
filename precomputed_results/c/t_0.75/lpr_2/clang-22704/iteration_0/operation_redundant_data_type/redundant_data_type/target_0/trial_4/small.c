typedef int a;

struct c {
  int d;
  int e;
};

struct c f;

typedef char b;

b fn1() {
  int h = 6L;
  if (f.e)
    goto i;
  fn1();
  b j;
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}