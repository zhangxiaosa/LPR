
struct c {
  int e;
};
struct c f;
int fn1() {
  int result;
  if (f.e) {
    result = 0xEEACFBBF;
    goto i;
  }
  result = fn1();
  return result;
i:
  f.e = 5;
  result = fn1();
  return result;
}
int main() {}
