typedef int a;

typedef char b;

struct c {
  int d;
  int e;
};

struct c f;

b fn1() {
  int h = 6L;
  if (f.e) {
    f.d = h;
    fn1();
    char j = 0xEEACFBBFL;
    return j;
  }
  else {
    fn1();
    char j;
    return j;
  }
}

int main() {}