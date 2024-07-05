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
    // fn1();  <-- Replace this line with the function body
    b j;
    return j;
  }
i:
  f.d = h;
  // fn1();  <-- Replace this line with the function body
  j = 0xEEACFBBFL;
  return j;
}
int main() {}