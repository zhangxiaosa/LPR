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
  // Inline the code inside fn1() recursively
  a h3 = 6L;
  if (f.e)
    goto i3;
  a h4 = 6L;
  if (f.e)
    goto i4;
  a h5 = 6L;
  if (f.e)
    goto i5;
  // ... Continue inlining fn1() recursively
  b j;
  return j;
i5:
  f.d = h5;
  // Inline the code inside fn1() recursively
  j = 0xEEACFBBFL;
  return j;
i4:
  f.d = h4;
  // Inline the code inside fn1() recursively
  j = 0xEEACFBBFL;
  return j;
i3:
  f.d = h3;
  // Inline the code inside fn1() recursively
  j = 0xEEACFBBFL;
  return j;
i2:
  f.d = h2;
  // Inline the code inside fn1() recursively
  j = 0xEEACFBBFL;
  return j;
i1:
  f.d = h1;
  // Inline the code inside fn1() recursively
  j = 0xEEACFBBFL;
  return j;
i:
  f.d = h;
  // Inline the code inside fn1() recursively
  j = 0xEEACFBBFL;
  return j;
}
int main() {}