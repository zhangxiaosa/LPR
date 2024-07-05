
struct c {
  int e;
};
struct c f;
int fn1() {
  if (f.e)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  f.e = 5;
  fn1();
  return 0xEEACFBBF;
}
int main() {
  struct c c[4];
  int i;
  for (i = 0; i < 4; i++) {
    if (c[i].e)
      goto i;
    c[i].e = 5;
  }
  return 0xEEACFBBF;
}
