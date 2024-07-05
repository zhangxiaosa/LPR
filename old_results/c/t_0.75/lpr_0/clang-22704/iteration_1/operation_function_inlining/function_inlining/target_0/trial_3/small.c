int f_d;
int f_e;

int main() {
  if (f_e) {
    goto i;
  }
  // Function body of fn1() inline
  if (f_e) {
    goto i;
  }
  return 0xEEACFBBFL;
i:
  f_d = 6L;
  // Function body of fn1() inline
  if (f_e) {
    goto i;
  }
  return 0xEEACFBBFL;
}