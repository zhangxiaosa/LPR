typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  f.d = 6L;
  return 0xEEACFBBFL;
}
int main() {}
