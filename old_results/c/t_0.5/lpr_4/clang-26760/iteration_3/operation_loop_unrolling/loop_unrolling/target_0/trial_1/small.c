int g;
short fn1() {
  int j = 0x24F96B7B;
  unsigned k;
  unsigned f;
  
  // Loop unrolled
  // Repeat the loop body j / 16 times
  // Decrement j by 16 in each iteration
  // No statements inside the loop body
  // Loop condition removed
  for (; j >= 16; j -= 16) {}
  
  k = k >> 1;
  if (g) {
    k = k << j;
  }
}
int main() {}