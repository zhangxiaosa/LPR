int f;

int main() {
  if (f) {
    goto i;
  }

  // Inlined code of fn1()
  if (f) {
    goto i;
  }

  // Inlined code of fn1()
  if (f) {
    goto i;
  }

i:
  f = 6L;
  goto i;
}