
struct c {
  long d;
  long e;
};

struct c f;

long fn1() {
  if (f.e)
    goto i;
  fn1();
  long j;
  return j;
i:
  f.d = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
