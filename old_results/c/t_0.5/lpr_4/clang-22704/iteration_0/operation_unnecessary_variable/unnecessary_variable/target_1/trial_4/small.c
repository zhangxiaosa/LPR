typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  if (f.e)
    goto i;
  fn1();
  return;
i:
  f.d = 6L;
  fn1();
  return;
}
int main() {}.