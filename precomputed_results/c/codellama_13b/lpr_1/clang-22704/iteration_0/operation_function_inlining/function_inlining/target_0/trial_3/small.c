
typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  a h = 6L;
  if (f.e)
    goto i;
  return fn1();
i:
  f.d = h;
  return fn1();
}
int main() {}
