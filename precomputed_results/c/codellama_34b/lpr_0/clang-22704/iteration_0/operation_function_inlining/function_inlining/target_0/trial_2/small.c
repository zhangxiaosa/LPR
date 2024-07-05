
typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

b fn1(a h) {
  if (f.e)
    goto i;
  b j;
  return j;
i:
  f.d = h;
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
