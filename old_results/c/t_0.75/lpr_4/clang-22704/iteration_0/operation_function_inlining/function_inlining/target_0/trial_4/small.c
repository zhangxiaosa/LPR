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
  a h_1 = 6L;
  if (f.e)
    goto i_1;
  a h_2 = 6L;
  if (f.e)
    goto i_2;
  // More inlined calls to fn1() if necessary

i_2:
  f.d = h_2;
  // More inlined calls to fn1() if necessary

  int j = 0xEEACFBBFL;
  // More code here if necessary
  return 0;
}