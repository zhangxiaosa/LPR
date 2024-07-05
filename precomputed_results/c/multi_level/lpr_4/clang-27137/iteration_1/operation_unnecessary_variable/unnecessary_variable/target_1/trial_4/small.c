int loop_var;

int main() {
  int q;
  for (loop_var = 0; loop_var < 10; loop_var++)
    while (loop_var > 1L)
      loop_var -= 1;
  printf("checksum = %X\n", loop_var);
  return 0;
}