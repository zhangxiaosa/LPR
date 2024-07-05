struct {
  int d;
  int e;
} f;

char fn1() {
  if (f.e) {
    f.d = 6L;
    if (f.e) {
      f.d = 6L;
      if (f.e) {
        f.d = 6L;
        // ... continue inlining the code inside the function
      }
      return 0xEEACFBBFL;
    } else {
      if (f.e) {
        f.d = 6L;
        // ... continue inlining the code inside the function
      }
      return 0xEEACFBBFL;
    }
  } else {
    if (f.e) {
      f.d = 6L;
      if (f.e) {
        f.d = 6L;
        // ... continue inlining the code inside the function
      }
      return 0xEEACFBBFL;
    } else {
      if (f.e) {
        f.d = 6L;
        // ... continue inlining the code inside the function
      }
      return 0xEEACFBBFL;
    }
  }
}

int main() {}