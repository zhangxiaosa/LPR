
struct c {
  int e;
};
int e;
int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  e = 5;
  fn1();
  return 0xEEACFBBF;
}

int main() {
  // Decompose `f` into variables with primary data types
  int e = 0;
  struct c f;
  f.e = e;

  // Optimize `fn1()`
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  e = 5;
  fn1();
  return 0xEEACFBBF;
}
