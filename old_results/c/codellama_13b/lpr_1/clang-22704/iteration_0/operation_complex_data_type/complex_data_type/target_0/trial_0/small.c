
struct c {
  int d;
  int e;
};
struct c f;

int fn1() {
  int h0;
  int h1;
  int h2;
  int h3;
  int h4;
  int h5;
  if (f.e)
    goto i;
  fn1();
  int j;
  return j;
i:
  f.d = h0;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
