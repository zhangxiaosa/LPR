int f;

int main() {
  if (f) {
    f = 6L;
    if (f) {
      f = 6L;
      if (f) {
        f = 6L;
        // ... continue inlining the code inside fn1
      }
      // ... continue inlining the code inside fn1
    }
    // ... continue inlining the code inside fn1
  }
  // ... continue inlining the code inside fn1
}