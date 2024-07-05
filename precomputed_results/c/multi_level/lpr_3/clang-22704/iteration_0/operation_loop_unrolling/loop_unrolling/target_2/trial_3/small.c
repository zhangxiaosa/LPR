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
  }
  else {
    b j;
    f.e = 1;
    fn1();
    fn1();
    return j;
  }
}

int main() {}
