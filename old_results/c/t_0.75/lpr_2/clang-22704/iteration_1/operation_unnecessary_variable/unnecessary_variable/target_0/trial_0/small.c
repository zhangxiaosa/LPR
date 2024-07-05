int f_e;
char fn1() {
  if (f_e)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  6L; // Replaced f_d = 6L with the constant value 6L
  fn1();
  return 0xEEACFBBF;
}
int main() {}