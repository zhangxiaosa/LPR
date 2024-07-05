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
  a h1 = 6L;
  if (f.e)
    goto i1;
  f.d = h1;
  a h2 = 0xEEACFBBFL;
  return h2;
i1:
  f.d = h1;
  a h3 = 0xEEACFBBFL;
  return h3;
i:
  f.d = h;
  a h4 = 0xEEACFBBFL;
  return h4;
}