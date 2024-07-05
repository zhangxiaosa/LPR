int f;
int fn1() {
  if (f)
    fn1();
  return 0xEEACFBBF;
}
int main() {}
