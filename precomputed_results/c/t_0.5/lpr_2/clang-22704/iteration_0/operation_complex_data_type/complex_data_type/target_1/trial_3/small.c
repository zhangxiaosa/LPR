typedef int a;
typedef char b;

struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  int h = 6;
  if (f.e) {
    f.d = h;
    fn1();
    char j = 0xEEACFBBF;
    return j;
  } else {
    fn1();
    char j;
    return j;
  }
}

int main() {}
