typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

int main() {
  if (f.e) {
    if (f.e)
      goto i;
    b j;
    return j;
  }

i:
  f.d = 6L;
  if (f.e) {
    if (f.e)
      goto i;
    j = 0xEEACFBBFL;
    return j;
  }
}