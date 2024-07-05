int l;

int fn3() {
  for (;;) {
    // Unrolled loop iterations
    if (l) {
      l++;
      if (l) {
        l++;
        if (l) {
          l++;
          // Continue unrolling the loop...
        }
      }
    }
    if (l == 0) {
      break;
    }
  }
}