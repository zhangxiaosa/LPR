struct {
  int d;
  int e;
} f;

char fn1() {
  if (f.e)
    goto i;
  fn1();
  return;
i:
  f.d = 6;
  fn1();
  return;
}

int main() {}