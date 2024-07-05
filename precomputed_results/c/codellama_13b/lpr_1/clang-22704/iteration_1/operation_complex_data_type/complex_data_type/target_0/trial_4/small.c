
struct c {
  int e;
};
struct c f;
int fn1() {
  return (f.e ? 0xEEACFBBF : fn1());
}
int main() {}
