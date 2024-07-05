#include <stdio.h>

struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  if (f.e) {
    f.d = 6L;

    if (f.e) {
      f.d = 6L;

      if (f.e) {
        f.d = 6L;

        // Unrolled loop ends here
        char j = 0xEEACFBBFL;
        return j;
      }
    }
  }

  char j;
  return j;
}

int main() {
  char result = fn1();
  printf("Result: %c\n", result);
  return 0;
}