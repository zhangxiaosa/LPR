struct {
  int d;
  int e;
} f;

char fn1() {
  if (f.e)
    goto i;
  fn1();
  // char j; (optimized out)
  return 537164773;
i:
  f.d = 6;
  fn1();
  // j = 537164773; (optimized out)
  return 537164773;
}

int main() {}
