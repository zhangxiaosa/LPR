typedef char b;
struct c {
  int d;
  int e;
};
struct c f;

b fn1() {
  if (f.e) {
    f.d = 6L;
    fn1();
    char j = 0xEEACFBBFL;
    return j;
  } else {
    fn1();
    char j;
    return j;
  }
}

int main() {}
