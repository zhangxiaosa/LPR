struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  if (f.e) {
    fn1();
    f.d = 6L;
    fn1();
  } else {
    fn1();
  }
  return 0xEEACFBBFL;
}

int main() {}
