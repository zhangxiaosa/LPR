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
    f.d = h;
    return 0xEEACFBBFL;
  } else {
    return fn1();
  }
}

int main() {}
