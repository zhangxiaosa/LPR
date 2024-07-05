int f;
char fn1() {
  if (f) {
    f = 6L;
    if (f) {
      f = 6L;
      if (f) {
        f = 6L;
        if (f) {
          f = 6L;
          // Continue unrolling the loop as needed
        }
      }
    }
  }
  return 0xEEACFBBFL; // Return statement outside the loop
}

int main() {}
