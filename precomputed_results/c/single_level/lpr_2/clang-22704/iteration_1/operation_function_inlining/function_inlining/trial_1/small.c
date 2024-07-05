struct c {
  int d;
  int e;
};

struct c f;

int main() {
  // Inlined code of fn1()
  if (f.e)
    goto i;

  // Recursive call 1
  if (f.e)
    goto i;

  // Recursive call 2
  if (f.e)
    goto i;

  char j = 0xEEACFBBFL;
  return j;

i:
  f.d = 6L;

  // Recursive call 3
  if (f.e)
    goto i;

  j = 0xEEACFBBFL;
  return j;
}