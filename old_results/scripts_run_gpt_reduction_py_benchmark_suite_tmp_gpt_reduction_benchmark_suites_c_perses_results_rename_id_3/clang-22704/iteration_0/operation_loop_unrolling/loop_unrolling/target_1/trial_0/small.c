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
    b j = 0xEEACFBBFL;
    return j;
  } else {
    a h1 = 6L;
    if (f.e) {
      f.d = h1;
      b j1 = 0xEEACFBBFL;
      return j1;
    } else {
      fn1();
    }

    b j2;
    return j2;
  }
}

int main() {}.