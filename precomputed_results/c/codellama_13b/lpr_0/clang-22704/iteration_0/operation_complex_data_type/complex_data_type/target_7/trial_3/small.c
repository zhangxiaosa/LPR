
struct c {
  int d;
  int e;
};

int d;
int e;

int fn1() {
  int h = 6;
  if (e)
    goto i;
  fn1();
  int j = 0xEEACFBBF;
  return j;
i:
  d = h;
  fn1();
  return j;
}

int main() {
  struct c obj;
  obj.d = 0;
  obj.e = 0;
  fn1();
  return 0;
}
