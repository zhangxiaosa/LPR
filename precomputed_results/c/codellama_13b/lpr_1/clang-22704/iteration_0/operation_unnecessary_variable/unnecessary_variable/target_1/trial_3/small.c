
struct c {
  int e;
};
struct c f;
int fn1() {
  if (5)
    goto i;
  fn1();
  int j;
  return j;
i:
  f.e = 5;
  fn1();
  j = 0xEEACFBBF;
  return j;
}
int main() {}
