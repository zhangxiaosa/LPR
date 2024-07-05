typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b main() {
  a h = 6L;

  if (f.e) {
    goto i;
  }

  // Inlined code of fn1() after function call elimination
  h = 6L;

  if (f.e) {
    goto i;
  }

  b j;

  i:
  f.d = h;

  // Inlined code of fn1() after function call elimination
  h = 6L;

  if (f.e) {
    goto i;
  }

  j = 0xEEACFBBFL;

  return j;
}