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

  // First iteration of the unrolled loop
  // Recursive call 1
  if (f.e)
    goto i;

  // Second iteration of the unrolled loop
  // Recursive call 2
  if (f.e)
    goto i;

i:
  f.d = h;

  // First iteration of the unrolled loop
  // Recursive call 1
  if (f.e)
    goto i;

  // Second iteration of the unrolled loop
  // Recursive call 2
  if (f.e)
    goto i;

  b j = 0xEEACFBBFL;
  return j;
}

int main() {}
