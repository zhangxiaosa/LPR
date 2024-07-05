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

  // First iteration
  if (f.e)
    goto i;
  f.d = h;
  j = 0xEEACFBBFL;
  return j;

i:
  f.d = h;
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
