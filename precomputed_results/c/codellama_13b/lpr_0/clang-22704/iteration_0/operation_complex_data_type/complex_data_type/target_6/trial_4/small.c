
struct c {
  int d;
  int e;
};

int d;
int e;

int fn1() {
  int h = 6;
  int j = 0xEEACFBBF;
  if (e)
    goto i;
  fn1();
i:
  d = h;
  fn1();
  return j;
}

int main() {}
