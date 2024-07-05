typedef int a;
  typedef char b;
  struct c {
    a d;
    a e;
  };
  struct c f;
  int main() {
    a h = 6L;
    if (f.e)
      goto i;
    a h2 = 6L;
    if (f.e)
      goto i2;
    a h3 = 6L;
    if (f.e)
      goto i3;
    // More function calls inlined here...
    b j;
    return j;
  i3:
    f.d = h3;
    // More function calls inlined here...
  i2:
    f.d = h2;
    // More function calls inlined here...
  i:
    f.d = h;
    // More function calls inlined here...
    j = 0xEEACFBBFL;
    return j;
  }