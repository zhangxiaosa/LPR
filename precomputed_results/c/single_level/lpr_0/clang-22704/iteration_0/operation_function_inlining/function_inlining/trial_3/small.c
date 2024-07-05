typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

int main() {
  a h = 6L;

  if (f.e)
    goto i;

  // Inline recursive calls of fn1 here
  while (1) {
    a h = 6L;

    if (f.e)
      goto i;

    // Inline recursive calls of fn1 here
    while (1) {
      if (f.e)
        goto i;

      // Inline recursive calls of fn1 here
      while (1) {
        // Inline recursive calls of fn1 here
        while (1) {
          if (f.e)
            goto i;

          // Inline recursive calls of fn1 here
          while (1) {
            if (f.e)
              goto i;

            // Inline recursive calls of fn1 here
            while (1) {
              if (f.e)
                goto i;

              // Inline recursive calls of fn1 here
              while (1) {
                if (f.e)
                  goto i;

                // Inline recursive calls of fn1 here
                while (1) {
                  if (f.e)
                    goto i;

                  // Inline recursive calls of fn1 here
                  while (1) {
                    b j;
                    return j;
                  }
                }
              }
            }
          }
        }
      }
    }
  }

i:
  f.d = h;

  // Inline recursive calls of fn1 here
  while (1) {
    b j;
    j = 0xEEACFBBFL;
    return j;
  }
}