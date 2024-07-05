
int h = 6;
int e;

int fn1() {
  if (e)
    goto i;
  fn1();
  int j = 0xEEACFBBF;
  return j;
i:
  h = h;
  fn1();
  return j;
}

int main() {}
