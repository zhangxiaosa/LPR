typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  if (f.e)
    goto i;

  if (f.e)
    goto i;

  b j;
  return j;

i:
  f.d = 6L;

  if (f.e)
    goto i;

  j = 0xEEACFBBFL;
  return j;
}

int main() {}
