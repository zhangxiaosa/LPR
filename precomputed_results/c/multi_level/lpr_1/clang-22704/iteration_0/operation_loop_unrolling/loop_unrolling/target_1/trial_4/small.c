typedef int a;

typedef char b;

struct c {
  a d;
  a e;
};

struct c f;
b fn1() {
  if (f.e) {
    f.d = 6L;
    if (f.e) {
      f.d = 6L;
      if (f.e) {
        f.d = 6L;
        // Code for 3rd iteration...
      }
      // Code for 2nd iteration...
    }
    // Code for 1st iteration...
    b j = 0xEEACFBBFL;
    return j;
  }
  fn1();
  b j;
  return j;
}

int main() {}
