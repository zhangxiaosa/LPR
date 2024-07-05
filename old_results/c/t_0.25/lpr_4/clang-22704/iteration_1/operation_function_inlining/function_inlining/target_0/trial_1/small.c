int d;
int e;

int main() {
  if (e) {
    d = 6L;
    if (e) {
      d = 6L;
      if (e) {
        d = 6L;
        // ... continue inlining the code inside the function
      } else {
        // ... continue inlining the code inside the function
      }
    } else {
      // ... continue inlining the code inside the function
    }
    return 0xEEACFBBFL;
  } else {
    if (e) {
      d = 6L;
      if (e) {
        d = 6L;
        // ... continue inlining the code inside the function
      } else {
        // ... continue inlining the code inside the function
      }
    } else {
      // ... continue inlining the code inside the function
    }
    return 0xEEACFBBFL;
  }
}