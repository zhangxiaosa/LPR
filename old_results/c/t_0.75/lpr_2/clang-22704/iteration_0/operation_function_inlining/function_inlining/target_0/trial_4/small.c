typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

b fn1() {
  if (f.e) {
    f.d = 6L;
    if (f.e) {
      f.d = 6L;
      if (f.e) {
        f.d = 6L;
        // Continue inlining the function if needed
      }
    }
  }
  b j = 0xEEACFBBFL;
  return j;
}

typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

b fn1() {
  if (f.e) {
    f.d = 6L;
    if (f.e) {
      f.d = 6L;
      if (f.e) {
        f.d = 6L;
        // Continue inlining the function if needed
      }
    }
  }
  b j = 0xEEACFBBFL;
  return j;
}