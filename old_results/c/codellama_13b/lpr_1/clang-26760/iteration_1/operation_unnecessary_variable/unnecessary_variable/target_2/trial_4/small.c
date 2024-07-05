
int g;
int fn1() {
  unsigned p = g;
q:;
  if (p) {
    goto q;
  }
}
int main() {}
