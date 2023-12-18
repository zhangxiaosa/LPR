int loop_var;

int main() {
  for (loop_var = 0; loop_var < 10; loop_var++)
    while (loop_var > 1L)
      loop_var -= 1;
  return 0;
}