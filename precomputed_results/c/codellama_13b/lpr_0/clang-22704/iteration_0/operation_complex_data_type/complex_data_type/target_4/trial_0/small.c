c
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
  int j;
  fn1();
  return j;
i:
  d = h;
  int j;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
