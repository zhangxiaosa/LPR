unsigned g;

unsigned fn2() {
  for (;;) {
    if (h2)
      return 0xC3L;
    g = 0x06D7L;
  }
}

int main() {
  fn2();
}