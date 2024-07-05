int main() {
  long loop_var;
  loop_var = 0;
  for (loop_var = 0; loop_var < 10; loop_var++)
    while (loop_var > 1L)
      loop_var -= 1;
  printf("checksum = %lX\n", loop_var);
  return 0;
}