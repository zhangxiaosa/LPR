int d;
int e;

int main() {
  if (e) {
    d = 6L;
    while (e) {
      // Recursive code inlined here
      if (e) {
        d = 6L;
        continue;
      } else {
        continue;
      }
      // End of inlined code
    }
  } else {
    while (e) {
      // Recursive code inlined here
      if (e) {
        d = 6L;
        continue;
      } else {
        continue;
      }
      // End of inlined code
    }
  }
  return 0;
}