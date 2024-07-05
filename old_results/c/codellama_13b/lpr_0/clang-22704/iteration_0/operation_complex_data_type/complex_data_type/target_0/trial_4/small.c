
struct c {
  int d;
  int e;
};

struct c f;

int fn1() {
  int h = 6L;
  if (f.e)
    goto i;
  int j;
  return j;
i:
  f.d = h;
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  // call the function
  fn1();
  return 0;
}
