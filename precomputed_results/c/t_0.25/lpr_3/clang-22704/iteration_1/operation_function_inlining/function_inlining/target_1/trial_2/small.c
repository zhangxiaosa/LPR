int f;

int main() {
  if (f) {
    f = 6L;
    if (f) {
      f = 6L;
      if (f) {
        f = 6L;
        if (f) {
          f = 6L;
          // Continue inlining the function body...
          // ...
          return 0xEEACFBBFL;
        } else {
          // Continue inlining the function body...
          // ...
          return 0xEEACFBBFL;
        }
      } else {
        // Continue inlining the function body...
        // ...
        return 0xEEACFBBFL;
      }
    } else {
      // Continue inlining the function body...
      // ...
      return 0xEEACFBBFL;
    }
  } else {
    // Continue inlining the function body...
    // ...
    return 0xEEACFBBFL;
  }
}