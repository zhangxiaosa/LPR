int a;
typedef char b;
struct c {
  int d;
  int e;
};
struct c f;
b fn1() {
  int h = 6L;
  if (f.e)
    goto i;
  fn1();
  char j;
  return j;
i:
  f.d = (int)h;
  fn1();
  j = 0xEEACFBBFL;
  return (char)j;
}
int main() {}
