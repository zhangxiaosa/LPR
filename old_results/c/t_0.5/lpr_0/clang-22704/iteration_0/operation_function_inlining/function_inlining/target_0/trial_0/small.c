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
  f.d = h;
  a h2 = 6L;
  if (f.e)
    goto i;
  return 0xEEACFBBFL;
i:
  f.d = h;
  a h3 = 6L;
  if (f.e)
    goto i;
  return 0xEEACFBBFL;
}

int main() {}