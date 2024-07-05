int loop_var;
int main() {
  int q;
  int loop_var_primary;
  int q_primary;

  q_primary = loop_var_primary;
  for (loop_var_primary = 0; loop_var_primary < 10; loop_var_primary++)
    while (q_primary > 1L)
      q_primary -= 1;

  printf("checksum = %X\n", q_primary);
  return 0;
}