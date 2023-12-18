int loop_var;

int main() {
  int q = 0;

  for (loop_var = 0; loop_var < 10; loop_var++) {
    // No code inside the loop modifies the value of q
  }

  printf("checksum = %X\n", q);
  return 0;
}