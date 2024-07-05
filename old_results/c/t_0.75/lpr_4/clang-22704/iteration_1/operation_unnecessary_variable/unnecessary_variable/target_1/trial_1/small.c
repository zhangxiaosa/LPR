int f_d;

char fn1() {
  goto i;
  fn1();
  return 537164773;
i:
  f_d = 6;
  fn1();
  return 537164773;
}

int main() {}
