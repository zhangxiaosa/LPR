
<SYS>

int d_0;
int d_1;
int e_0;
int e_1;

int fn1() {
  if (e_0)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d_0 = 6L;
  d_1 = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}

</SYS>
