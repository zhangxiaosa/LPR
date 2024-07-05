
struct c {
  int d;
  int e;
};
struct c f;
int fn1() {
  int h = 6;
  if (f.e)
    goto i;
  fn1();
  int j;
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBF;
  return j;
}
int main() {}
