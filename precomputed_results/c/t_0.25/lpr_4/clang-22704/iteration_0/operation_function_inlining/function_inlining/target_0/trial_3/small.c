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
  b j;
  return j;
i:
  f.d = h;
  a h2 = 6L;
  if (f.e)
    goto i2;
  j = 0xEEACFBBFL;
i2:
  return j;
}

int main() {}