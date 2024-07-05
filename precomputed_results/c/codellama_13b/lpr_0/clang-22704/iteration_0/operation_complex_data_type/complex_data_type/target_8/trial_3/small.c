
struct c {
  long d;
  long e;
};

long d;
long e;

long fn1() {
  long h = 6L;
  if (e) {
    goto i;
  }
  fn1();
  long j = 0xEEACFBBFL;
  return j;
i:
  d = h;
  fn1();
  return j;
}

int main() {}
