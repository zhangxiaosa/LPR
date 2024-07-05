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

  // Inlined code of fn1
  a h1 = 6L;
  if (f.e)
    goto i;

  // Inlined code of fn1
  a h2 = 6L;
  if (f.e)
    goto i;

  b j;
  return j;

i:
  f.d = h;

  // Inlined code of fn1
  a h3 = 6L;
  if (f.e)
    goto i;

  j = 0xEEACFBBFL;
  return j;
}

int main() {}