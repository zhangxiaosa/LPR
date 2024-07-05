
struct c {
  int d;
  int e;
};

int d;
int e;

int fn1() {
  int h = 6L;
  if (e) {
    fn1();
    d = h;
    return 0xEEACFBBFL;
  } else {
    return fn1();
  }
}

int main() {}
