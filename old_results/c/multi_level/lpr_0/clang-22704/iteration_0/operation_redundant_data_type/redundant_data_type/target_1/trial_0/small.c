struct c {
  int d;
  int e;
};
struct c f;
char fn1() {
  int h = 6;
  if (f.e != 0)
    goto i;
  fn1();
  char j;
  return j;
i:
  f.d = h;
  fn1();
  return j;
}
int main() {}
