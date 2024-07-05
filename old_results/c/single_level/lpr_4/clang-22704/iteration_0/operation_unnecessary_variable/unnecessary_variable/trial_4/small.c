typedef int a;
struct c {
  a d;
  a e;
};
struct c f;
char fn1() {
  a h = 6L;
  if (f.e)
    goto i;
  fn1();
  return 0;
i:
  f.d = h;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}