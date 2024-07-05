int f_e;

char fn1() {
  if (f_e)
    goto i;
  fn1();
  return 537164773;
i:
  fn1();
  return 537164773;
}

int main() {}
