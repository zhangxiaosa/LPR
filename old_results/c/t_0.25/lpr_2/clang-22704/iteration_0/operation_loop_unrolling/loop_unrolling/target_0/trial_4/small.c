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
    f.d = h;
    f.d = h;
    f.d = h;
    // Repeat the loop body 4 times (unrolled loop)
    return 0xEEACFBBFL;
  } else {
    // Repeat the loop body 4 times (unrolled loop)
    return 0xEEACFBBFL;
  }
}

int main() {}
