C
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
    return 0xEEACFBBFL;
  else
    f.d = h;
  return fn1();
}
int main() {}
