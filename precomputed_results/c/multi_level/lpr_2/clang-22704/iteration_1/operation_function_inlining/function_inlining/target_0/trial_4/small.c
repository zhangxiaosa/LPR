int f;

int main() {
  if (f)
    goto i;
  main();
  return 0;
i:
  f = 6;
  main();
  return 0;
}