typedef char b;
struct c {
  int d;
  int e;
};
struct c f;
b fn1() {
  int h = 6L;
  if (f.e != 0)
    goto i;
  fn1();
  char j;
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}