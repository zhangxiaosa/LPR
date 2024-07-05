int h;
int main() {
  short ak[8];
  unsigned p2;

  // Loop unrolled by a factor of 2
  for (p2 = 0; p2 <= 7; p2 += 2) {
    // Unrolled iteration 1
    // No if statement to be executed

    // Unrolled iteration 2
    // No if statement to be executed

    p2 += 1; // Additional increment to account for the unrolled iterations
  }
}