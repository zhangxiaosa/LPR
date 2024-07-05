int f;
int h;
char j;

char fn1() {
  h = 6L;
  if (f)
    goto i;
  fn1();
  return j;

i:
  f = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}