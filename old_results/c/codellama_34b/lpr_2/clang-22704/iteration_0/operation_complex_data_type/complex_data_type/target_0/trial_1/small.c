
The program is struct c {
  int d;
  int e;
};
struct c f;
int fn1() {
  int h = 6L;
  if (f.e)
    goto i;
  fn1();
  int j;
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
.                 The target to be optimized is `f` (struct c).

The program is struct c {
  int d;
  int e;
};
struct c f;
int fn1() {
  int h = 6L;
  if (f.e)
    goto i;
  fn1();
  int j;
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {
  f.d = 0;
  f.e = 0;
  int result = fn1();
  printf("Result: %d", result);
  return 0;
}
