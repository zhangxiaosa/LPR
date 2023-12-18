int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned m;
unsigned n;
signed o;

int main() {
  // Loop unrolling
  // Iteration 1
  int ab;
  if (0x4F92L < (ab = o == 0 ? o : o % o, 6)) {
    // Do nothing
  } else if (o <= 0xE3L) {
    // Do nothing
  } else if (ab) {
    break;
  }
  // Iteration 2
  if (0x4F92L < (ab = o == 0 ? o : o % o, 6)) {
    // Do nothing
  } else if (o <= 0xE3L) {
    // Do nothing
  } else if (ab) {
    break;
  }
  // Iteration 3
  // Replicate the body 9 more times for a total of 12 iterations

  return m;
}