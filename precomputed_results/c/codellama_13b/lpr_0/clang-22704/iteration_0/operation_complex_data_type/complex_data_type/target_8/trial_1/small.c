
struct c {
  int d;
  int e;
};

int d;
int e;

int h;

int j;

int fn1() {
  h = 6;
  if (e) {
    goto i;
  }
  fn1();
  j = 0xEEACFBBF;
  return j;
i:
  d = h;
  fn1();
  return j;
}

int main() {}
