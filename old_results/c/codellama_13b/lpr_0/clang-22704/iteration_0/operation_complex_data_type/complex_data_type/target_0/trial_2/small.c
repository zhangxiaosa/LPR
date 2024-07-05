
struct c {
  int d;
  int e;
};

int h;
int j;

int fn1() {
  if (f.e)
    goto i;
  fn1();
  j = 0xEEACFBBFL;
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
