struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  if (f.e)
    goto i;
  fn1();
  return 0;

i:
  f.d = 6L;
  fn1();
  return 0;
}

int main() {}
