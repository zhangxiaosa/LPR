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
    goto i;
  }

  a j;
  j = 0xEEACFBBFL;
  return j;

i:
  fn1();

  j = 0xEEACFBBFL;
  return j;
}

int main() {}