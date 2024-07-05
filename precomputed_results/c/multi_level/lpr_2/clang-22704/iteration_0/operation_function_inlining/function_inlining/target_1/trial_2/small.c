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
  a h = 6L;
  if (f.e)
    goto i;
  b j;
  a h = 6L;
  if (f.e)
    goto i;

i:
  f.d = h;
  a h = 6L;
  if (f.e)
    goto i;
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
