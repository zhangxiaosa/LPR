int f;

int main() {
  if (f) {
    f = 6L;
    if (f) {
      f = 6L;
      if (f) {
        f = 6L;
        // ... continue inlining the code
        return 0xEEACFBBFL;
      } else {
        // ... continue inlining the code
        return 0xEEACFBBFL;
      }
    } else {
      // ... continue inlining the code
      return 0xEEACFBBFL;
    }
  } else {
    // ... continue inlining the code
    return 0xEEACFBBFL;
  }
}