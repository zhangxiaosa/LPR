
int h = 6L;

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
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
