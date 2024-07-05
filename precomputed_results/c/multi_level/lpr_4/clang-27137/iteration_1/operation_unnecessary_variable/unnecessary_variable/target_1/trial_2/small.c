int loop_var;

int main() {
  loop_var = 0;
  while (loop_var < 10) {
    while (loop_var > 1L) {
      loop_var -= 1;
    }
    loop_var++;
  }
  printf("checksum = %X\n", loop_var);
  return 0;
}