
long fn2() {
  struct s q;
  for (;;) {
    struct s r = q;
    q = r;
  }
}
int main() {}
