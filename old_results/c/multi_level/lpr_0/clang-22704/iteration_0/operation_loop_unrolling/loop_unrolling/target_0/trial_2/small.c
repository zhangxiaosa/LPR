typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  a h = 6L;
  if (f.e)
    goto i;

  // First iteration
  a h1 = 6L;
  if (f.e)
    goto i1;
  fn1();
  b j1;
  return j1;
i1:
  f.d = h1;
  fn1();
  b j1_1 = 0xEEACFBBFL;
  return j1_1;

  // Second iteration
  a h2 = 6L;
  if (f.e)
    goto i2;
  fn1();
  b j2;
  return j2;
i2:
  f.d = h2;
  fn1();
  b j2_1 = 0xEEACFBBFL;
  return j2_1;

  // Third iteration
  a h3 = 6L;
  if (f.e)
    goto i3;
  fn1();
  b j3;
  return j3;
i3:
  f.d = h3;
  fn1();
  b j3_1 = 0xEEACFBBFL;
  return j3_1;
}

int main() {}