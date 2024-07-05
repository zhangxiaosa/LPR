int f;

int fn1() {
  if (f) {
    f = 6;

    // Unrolled loop 1
    if (f) {
      f = 6;

      // Unrolled loop 2
      if (f) {
        f = 6;

        // Unrolled loop 3
        if (f) {
          f = 6;

          // Unrolled loop 4
          if (f) {
            f = 6;

            // Unrolled loop 5
            if (f) {
              f = 6;
            }
          }
        }
      }
    }

    int j = 0xEEACFBBF;
    return j;
  }

  // Unrolled loop for additional iterations
  if (f) {
    f = 6;
  }

  int j;
  return j;
}

int main() {}
