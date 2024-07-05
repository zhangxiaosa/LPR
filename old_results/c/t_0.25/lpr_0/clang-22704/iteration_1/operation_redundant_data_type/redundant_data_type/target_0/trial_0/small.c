char f;
char fn1() {
  if (f)
    goto i;
  fn1();
  return (char)0xEEACFBBF;
i:
  f = 6;
  fn1();
  return (char)0xEEACFBBF;
}
int main() {}