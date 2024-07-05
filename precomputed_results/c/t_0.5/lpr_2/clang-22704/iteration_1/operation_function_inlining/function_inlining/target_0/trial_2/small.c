#include <stdio.h>

struct {
  int d;
  int e;
} f;

int main() {
  if (f.e) {
    f.d = 6L;
    if (f.e) {
      f.d = 6L;
      if (f.e) {
        f.d = 6L;
        // ... continue inlining the function body
        return 0xEEACFBBFL;
      } else {
        // ... continue inlining the function body
        return 0xEEACFBBFL;
      }
      return 0xEEACFBBFL;
    } else {
      // ... continue inlining the function body
      return 0xEEACFBBFL;
    }
    return 0xEEACFBBFL;
  } else {
    // ... continue inlining the function body
    return 0xEEACFBBFL;
  }
}