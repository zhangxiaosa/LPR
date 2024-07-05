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
  a h2 = 6L;
  if (f.e)
    goto i2;
  // Inline the code of fn1() here
  b j;
  return j;
i2:
  f.d = h2;
  b j2 = 0xEEACFBBFL;
  return j2;
i1:
  f.d = h1;
  a h2 = 6L;
  if (f.e)
    goto i2;
  // Inline the code of fn1() here
  b j1;
  return j1;
i:
  f.d = h;
  a h1 = 6L;
  if (f.e)
    goto i1;
  a h2 = 6L;
  if (f.e)
    goto i2;
  // Inline the code of fn1() here
  b j0;
  return j0;
}
int main() {}
