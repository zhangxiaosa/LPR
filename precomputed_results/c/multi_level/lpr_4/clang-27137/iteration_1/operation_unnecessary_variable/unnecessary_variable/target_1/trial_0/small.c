int loop_var;
int main() {
  for (loop_var = 0; loop_var < 10; loop_var++)
    while (0 > 1L)
      0 -= 1;
  printf("checksum = %X\n", 0);
  return 0;
}