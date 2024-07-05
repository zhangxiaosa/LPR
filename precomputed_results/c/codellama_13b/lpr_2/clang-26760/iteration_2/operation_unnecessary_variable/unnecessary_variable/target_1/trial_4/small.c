
int fn1() {
  goto q;

q:
  j = 1;
  j = 1 << 1;
  goto q;
}
