
struct c {
  int d;
  int e;
};

int d;
int e;

int fn1() {
  int h = 6L;
  if (e)
    goto i;
  fn1();
  int j = 0xEEACFBBFL;
  return j;
i:
  d = h;
  fn1();
  return j;
}

int main() {}
