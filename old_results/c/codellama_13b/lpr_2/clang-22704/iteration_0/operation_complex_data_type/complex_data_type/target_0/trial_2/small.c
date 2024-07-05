
long d;
long e;
long i;
long j;

long fn1() {
  if (e)
    goto i;
  fn1();
  j = 0xEEACFBBFL;
  return j;
i:
  d = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
