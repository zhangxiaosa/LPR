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

  // Inlined body of fn1
  a h_1 = 6L;
  if (f.e)
    goto i_1;

  // Inlined body of fn1 (recursive call)
  a h_2 = 6L;
  if (f.e)
    goto i_2;

  // ...
  // Continue inlining for all recursive calls
  // ...

  b j;
  return j;

i_2:
  f.d = h_2;

  // Inlined body of fn1 (recursive call)
  // ...

  j = 0xEEACFBBFL;
  return j;

i_1:
  f.d = h_1;

  // Inlined body of fn1 (recursive call)
  // ...

  j = 0xEEACFBBFL;
  return j;

i:
  f.d = h;

  // Inlined body of fn1 (recursive call)
  // ...

  j = 0xEEACFBBFL;
  return j;
}