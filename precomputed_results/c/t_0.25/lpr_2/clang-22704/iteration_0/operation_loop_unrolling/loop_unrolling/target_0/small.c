typedef int a;

typedef char b;

struct c {
  a d;
  a e;
};

struct c f;

b fn1() {
  a h = 6L;

  // Unrolled loop branch 1
  if (f.e) {
    f.d = h;

    // Unrolled loop branch 2
    if (f.e) {
      f.d = h;

      // Unrolled loop branch 3
      if (f.e) {
        f.d = h;

        // Unrolled loop branch 4
        if (f.e) {
          f.d = h;

          // Unrolled loop branch 5
          if (f.e) {
            f.d = h;

            // Unrolled loop branch 6
            if (f.e) {
              f.d = h;

              // Unrolled loop branch 7
              if (f.e) {
                f.d = h;

                // Unrolled loop branch 8
                if (f.e) {
                  f.d = h;
                  fn1();
                  return 0xEEACFBBFL;
                }
              }
            }
          }
        }
      }
    }
  }

  fn1();
  return 0xEEACFBBFL;
}

int main() {}