struct c {
  int d;
  int e;
};
struct c f;

char fn1() {
  int h = 6L;
  if (f.e != 0)
    goto i;
  fn1();
  char j;
  return (int)j;
i:
  f.d = (int)h;
  fn1();
  j = 0xEEACFBBFL;
  return (int)j;
}