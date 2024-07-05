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
  b j;

loop_body_unrolled:
  j = 0xEEACFBBFL;
  return j;

i:
  f.d = h;

  // Loop unrolled #1
  j = 0xEEACFBBFL;
  return j;

  // Loop unrolled #2
  j = 0xEEACFBBFL;
  return j;
}

int main() {
}
