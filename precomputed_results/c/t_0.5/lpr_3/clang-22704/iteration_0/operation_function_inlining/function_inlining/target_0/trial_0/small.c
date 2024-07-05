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
  a h_1 = 6L;
  if (f.e)
    goto i_1;
  a h_2 = 6L;
  if (f.e)
    goto i_2;
  // ... continue inlining the code of fn1
  j = 0xEEACFBBFL;
  return j;
i_2:
  f.d = h_2;
  goto i_1;
i_1:
  f.d = h_1;
  goto i;
i:
  f.d = h;
  goto i_2;
}
