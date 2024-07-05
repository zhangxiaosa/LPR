typedef int a;

typedef char b;

struct c {
  a d;
  a e;
};

struct c f;

b fn1() {
  a h = 6L;

  // First unrolled iteration
  if (f.e) goto i1;

  // First unrolled iteration
  b j1;
  return j1;

i1:
  f.d = h;

  // Second unrolled iteration
  if (f.e) goto i2;

  // Change recursive call to second unrolled iteration
  a h2 = 6L;
  f.d = h2;

  // Second unrolled iteration
  b j2 = 0xEEACFBBFL;
  return j2;

i2:
  f.d = h;

  b j;
  return j;
}