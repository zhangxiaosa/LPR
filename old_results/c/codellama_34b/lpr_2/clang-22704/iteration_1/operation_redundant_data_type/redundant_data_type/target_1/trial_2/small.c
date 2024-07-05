
<SYS>

// The program with the specified data type eliminated and replaced with its associated original data type
int d;
bool e;
int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = 0xEEACFBBFL;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}

</SYS>
