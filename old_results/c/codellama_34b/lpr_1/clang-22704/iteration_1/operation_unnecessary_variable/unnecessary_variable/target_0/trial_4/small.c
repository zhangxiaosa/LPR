
int e;
int fn1(int *h) {
  if (e)
    goto i;
  fn1(h);
  return *h;
i:
  return *h;
}
int main() {}
