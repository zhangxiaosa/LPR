
int h = 6;

struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  if (f.e)
    goto i;
  fn1();
  char j;
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBF;
  return j;
}

int main() {}
