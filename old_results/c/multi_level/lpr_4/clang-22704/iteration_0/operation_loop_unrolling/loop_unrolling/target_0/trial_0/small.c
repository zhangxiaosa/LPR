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

  // Unrolled loop iteration 1
  f.d = h;
  j = 0xEEACFBBFL;
  return j;

i:
  // Unrolled loop iteration 2
  f.d = h;
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
