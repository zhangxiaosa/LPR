int f;

int main() {
  if (f) {
    goto i;
  }
  // Inlined content of fn1()
  if (f) {
    goto i;
  }
  goto i;
i:
  f = 6L;
  // Inlined content of fn1()
  if (f) {
    goto i;
  }
  goto i;
}