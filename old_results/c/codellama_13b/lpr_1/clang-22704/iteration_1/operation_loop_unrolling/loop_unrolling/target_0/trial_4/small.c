c
struct c {
  int e;
};
struct c f;
int fn1() {
  if (f.e) {
    f.e = 5;
    fn1();
  }
  return 0xEEACFBBF;
}
int main() {}
