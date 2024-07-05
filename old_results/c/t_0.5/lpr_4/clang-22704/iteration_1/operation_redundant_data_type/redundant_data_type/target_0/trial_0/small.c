int a;
typedef char b;
struct c {
  int d;
  int e;
};
struct c f;
b fn1() {
  if (f.e)
    goto i;
  fn1();
  b j;
  return j;
i:
  f.d = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
