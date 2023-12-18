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

  // Inlined code from fn1()
  a h_0 = 6L;
  if (f.e) {
    f.d = h_0;
    // Inlined code from fn1()
    b j_0 = 0xEEACFBBFL;
    return j_0;
  }

  b j;
  return j;

i:
  f.d = h;
  // Inlined code from fn1()
  b j_1 = 0xEEACFBBFL;
  return j_1;
}

int main() {}
.