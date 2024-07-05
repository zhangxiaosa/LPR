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

  // ... (continue with the inlined code of fn1)

i2:
  f.d = h2;

  // ... (continue with the inlined code of fn1)

j2:
  b j2 = 0xEEACFBBFL;
  return j2;

i1:
  f.d = h1;

  // ... (continue with the inlined code of fn1)

j1:
  b j1 = 0xEEACFBBFL;
  return j1;

i:
  f.d = h;

  // ... (continue with the inlined code of fn1)

j:
  b j = 0xEEACFBBFL;
  return j;
}

int main() {}