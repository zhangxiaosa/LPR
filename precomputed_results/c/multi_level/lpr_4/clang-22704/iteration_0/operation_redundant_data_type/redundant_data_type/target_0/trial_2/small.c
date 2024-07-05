struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  int h = 6;

  if (f.e)
    fn1();

  char j;

  return j;

  f.d = h;

  fn1();

  j = 0xEEACFBBF;

  return j;
}
