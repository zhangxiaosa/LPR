#include <stdio.h>

int f;

int main() {
  if (f)
    goto i;

  // Inlined code block
  if (f) {
    goto i;
  } else {
    // Code block inside the "else" branch
    f = 6;
    // Recursive call
    if (f) {
      goto i;
    } else {
      // Code block inside the "else" branch
      // Recursive call
      if (f) {
        goto i;
      } else {
        // Code block inside the "else" branch
        // Recursive call
        return 0;
      }
    }
  }
i:
  f = 6;
  // Recursive call
  if (f) {
    goto i;
  } else {
    // Code block inside the "else" branch
    // Recursive call
    if (f) {
      goto i;
    } else {
      // Code block inside the "else" branch
      // Recursive call
      return 0;
    }
  }
}
