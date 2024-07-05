int f_d;

int main() {
  if (f_d) {
    goto i;
  }
  
  // Inlined content of fn1() after the if condition
  if (f_d) {
    goto i;
  }
  return 0xEEACFBBF;

i:
  f_d = 6L;
  
  // Inlined content of fn1() after setting f_d to 6L
  if (f_d) {
    goto i;
  }
  return 0xEEACFBBF;
}