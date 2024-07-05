typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

int main() {
  a h = 6L;
  if (f.e)
    goto i;
  // Inlined code of fn1
  if (f.e)
    goto i;
  // Inlined code of fn1
  f.d = h;
  // Inlined code of fn1
  b j = 0xEEACFBBFL;
  return j;
i:
  f.d = h;
  // Inlined code of fn1
  b j = 0xEEACFBBFL;
  return j;
}