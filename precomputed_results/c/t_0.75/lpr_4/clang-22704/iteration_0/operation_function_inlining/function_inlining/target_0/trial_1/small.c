typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  a h = 6L;
  if (f.e) {
    if (f.e) {
      f.d = 6L;
      return 0xEEACFBBFL;
    }
    f.d = h;
    return 0xEEACFBBFL;
  }
  a h_inner = 6L;
  if (f.e)
    goto i_inner;
  f.d = h_inner;
  return 0xEEACFBBFL;
i_inner:
  f.d = h_inner;
  return 0xEEACFBBFL;
}

int main() {
  a h = 6L;
  if (f.e) {
    if (f.e) {
      f.d = 6L;
      return 0xEEACFBBFL;
    }
    f.d = h;
    return 0xEEACFBBFL;
  }
  a h_inner = 6L;
  if (f.e)
    goto i_inner;
  f.d = h_inner;
  return 0xEEACFBBFL;
i_inner:
  f.d = h_inner;
  return 0xEEACFBBFL;
}