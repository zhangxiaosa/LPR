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
  // Inlined code
  a h_1 = 6L;
  if (f.e)
    goto i_1;
  a h_2 = 6L;
  if (f.e)
    goto i_2;
  // ... continue inlining the code until the end of the function

i_2:
  f.d = h_2;
  // Inlined code
  b j_2 = 0xEEACFBBFL;
  return j_2;

i_1:
  f.d = h_1;
  // Inlined code
  b j_1 = 0xEEACFBBFL;
  return j_1;

i:
  f.d = h;
  // Inlined code
  b j = 0xEEACFBBFL;
  return j;
}

int main() {}