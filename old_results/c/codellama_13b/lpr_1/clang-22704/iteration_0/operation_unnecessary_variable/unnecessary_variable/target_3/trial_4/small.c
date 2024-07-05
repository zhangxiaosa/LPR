
int fn1() {
  if (0)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  ;
  return 0xEEACFBBF;
}

int main() {}
