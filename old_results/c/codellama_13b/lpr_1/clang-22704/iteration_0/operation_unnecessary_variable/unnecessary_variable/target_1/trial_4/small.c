
struct c {
  int dummy;
};
struct c f;
int fn1() {
  if (f.dummy)
    goto i;
  fn1();
  int j;
  return j;
i:
  f.dummy = 5;
  fn1();
  j = 0xEEACFBBF;
  return j;
}
int main() {
  f.dummy = 5;
  fn1();
  return 0;
}
