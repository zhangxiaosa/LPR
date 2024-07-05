int f;

char fn1() {
  if (f)
    goto i;
  fn1();
  return j;
i:
  f = 6L;
  fn1();
  return;
}

int main() {}.