auto loop_var;

int main() {
  auto q;
  q = loop_var;
  for (loop_var = 0; loop_var < 10; loop_var++)
    while (q > 1L)
      q -= 1;
  printf("checksum = %x\n", q);
  return 0;
}