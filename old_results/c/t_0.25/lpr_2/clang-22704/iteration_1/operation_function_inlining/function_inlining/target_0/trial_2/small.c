int f;

int main() {
  if (f) {
    f = 6L;
    if (f) {
      f = 6L;
      if (f) {
        f = 6L;
        // ...
      }
    }
  }
}