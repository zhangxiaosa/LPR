
int main() {
  long d = 6L;
  long fn1() {
    if (d)
      goto i;
    fn1();
    long j;
    return j;
  i:
    fn1();
    return 0xEEACFBBFL;
  }
  return 0;
}
