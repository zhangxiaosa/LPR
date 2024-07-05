int f_d;
int f_e;

char fn1() {
  if (f_e) {
    goto i;
  }
  
  // Iteration 1
  if (f_e) {
    goto i;
  }
  
  // Iteration 2
  if (f_e) {
    goto i;
  }
  
  // Iteration 3
  if (f_e) {
    goto i;
  }
  
  // Return statement for all iterations
  return 0xEEACFBBFL;

i:
  f_d = 6L;

  // Iteration 1
  if (f_e) {
    goto i;
  }
  
  // Iteration 2
  if (f_e) {
    goto i;
  }
  
  // Iteration 3
  if (f_e) {
    goto i;
  }
  
  // Return statement for all iterations
  return 0xEEACFBBFL;
}

int main() {}
