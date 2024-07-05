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
  for (int loop = 0; loop < RECURSION_DEPTH; loop++) {
    // Unrolled code block
    // ... Original code inside fn1() ...
  }
  b j;
  return j;
i:
  f.d = h;
  for (int loop = 0; loop < RECURSION_DEPTH; loop++) {
    // Unrolled code block
    // ... Original code inside fn1() ...
  }
  j = 0xEEACFBBFL;
  return j;
}
int main() {}