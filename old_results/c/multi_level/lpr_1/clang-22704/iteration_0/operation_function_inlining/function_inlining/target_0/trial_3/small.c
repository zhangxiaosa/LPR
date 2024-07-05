typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

b fn1() {
  f.d = 6L;
  f.d = 6L;
  b j = 0xEEACFBBFL;
  return j;
}

int main() {}
