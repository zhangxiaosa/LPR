int f;

int main() {
  if (f)
    goto i;
  // Inlined code of fn1()
  if (f)
    goto i;
  // Inlined code of fn1()
  goto i;

i:
  f = 6L;
  // Inlined code of fn1()
  goto i;
}