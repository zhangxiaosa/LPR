int f_d;
int f_e;

int fn1() {
  if (f_e) {
    goto i;
  }
  fn1();
  return 0xEEACFBBF;
  
i:
  int temp = 6;
  f_d = temp;
  fn1();
  return 0xEEACFBBF;
}

int main() {
  // No code in main function
}