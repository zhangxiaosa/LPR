int loop_var;
int main() {
  int q;
  q = loop_var;

  // Loop unrolling
  while (q > 1L) {
    q -= 2; // Unrolled iteration
    if (q <= 1L) {
      q -= 1; // Decrement q by 1
      break; // Exit loop
    }
    q -= 2; // Unrolled iteration
    if (q <= 1L) {
      q -= 1; // Decrement q by 1
      break; // Exit loop
    }
    // Continue unrolled iterations...
  }

  printf("checksum = %X\n", q);

  return 0;
}