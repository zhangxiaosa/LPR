typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b inline_fn1() {
  a h = 6L;

  if (f.e)
    goto i;

  a h_inline1 = 6L;

  if (f.e)
    goto i_inline1;

  a h_inline2 = 6L;

  if (f.e)
    goto i_inline2;

  b j_inline2;
  return j_inline2;

i_inline2:
  f.d = h_inline2;

i_inline1:
  f.d = h_inline1;

i:
  f.d = h;
  a h_inline3 = h;
  if (f.e)
    goto i_inline3;

  b j_inline3;
  return j_inline3;

i_inline3:
  f.d = h_inline3;

j_inline2 = 0xEEACFBBFL;
return j_inline2;
i_inline2:
  f.d = h;
  a h_inline3 = h;
  if (f.e)
    goto i_inline3;

  b j_inline3;
  return j_inline3;

i_inline3:
  f.d = h_inline3;

j_inline2 = 0xEEACFBBFL;
return j_inline2;
}

int main() {}
