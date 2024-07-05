typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  a h = 6L;
  if (f.e) {
    a h = 6L;
    if (f.e)
      goto i;
    a h = 6L;
    if (f.e)
      goto i;
    b j;
    return j;
  } else {
    f.d = h;
    a h = 6L;
    if (f.e)
      goto i;
    b j;
    j = 0xEEACFBBFL;
    return j;
  }
i:
  f.d = h;
  a h = 6L;
  if (f.e)
    goto i;
  b j;
  j = 0xEEACFBBFL;
  return j;
}

int main() {}