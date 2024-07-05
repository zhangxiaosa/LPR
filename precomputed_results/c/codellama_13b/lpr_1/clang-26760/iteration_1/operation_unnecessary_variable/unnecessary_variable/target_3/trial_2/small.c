
int fn1() {
  unsigned p = g;
q:;
  p = p >> 1;
  if (p) {
    p = p << 0x24F96B7B;
    goto q;
  }
}
int main() {}
