typedef char b;
struct c {
  int d;
  int e;
};
struct c f;
b fn1() {
  int h = 6;
  if (f.e != 0)
    goto i;
  fn1();
  char j;
  return j;
i:
  f.d = (int)h;
  fn1();
  j = (char)0xEEACFBBF;
  return j;
}
int main() {}
