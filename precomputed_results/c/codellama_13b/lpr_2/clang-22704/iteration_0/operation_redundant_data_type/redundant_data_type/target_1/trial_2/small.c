
struct c {
  int d;
  int e;
};

struct c f;

void fn1() {
  if (f.e)
    goto i;
  fn1();
  char j;
  return j;
i:
  f.d = 6;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
