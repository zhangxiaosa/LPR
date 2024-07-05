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
    goto i;
  f.d = h1;
  a j = 0xEEACFBBFL;
  return j;
i:
  f.d = h;
  a h2 = 6L;
  if (f.e)
    goto i;
  f.d = h2;
  a j = 0xEEACFBBFL;
  return j;
}

int main() {}
