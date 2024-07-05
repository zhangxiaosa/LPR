
<SYS>

int d;
int e;

int fn1() {
  int h = 6L;
  int j;
  if (e)
    goto i;
  fn1();
  j = 0xEEACFBBFL;
  return j;
i:
  d = h;
  fn1();
  return j;
}

int main() {}

</SYS>
