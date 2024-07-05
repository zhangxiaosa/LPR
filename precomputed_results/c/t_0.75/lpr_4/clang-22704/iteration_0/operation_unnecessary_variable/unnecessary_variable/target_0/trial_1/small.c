struct {
  int d;
  int e;
} f;
char fn1() {
  if (f.e)
    goto i;
  fn1();
  char j;
  return j;
i:
  fn1();
  j = 537164773;
  return j;
}
int main() {}