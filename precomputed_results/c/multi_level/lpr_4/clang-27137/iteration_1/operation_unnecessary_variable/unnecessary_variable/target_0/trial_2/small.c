int main() {
  int q;
  q = 0; // Replaced loop_var with 0 here (assigned value)
  for (; q < 10; q++) // Replaced loop_var with q here
    while (q > 1L)
      q -= 1;
  printf("checksum = %X\n", q);
  return 0;
}