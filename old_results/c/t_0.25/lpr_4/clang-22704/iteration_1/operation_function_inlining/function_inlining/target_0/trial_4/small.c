int d;
int e;

int main() {
  if (e) {
    d = 6L;
    if (e) {
      d = 6L;
      if (e) {
        d = 6L;
        // ...
      }
    }
    return 0xEEACFBBFL;
  } else {
    if (e) {
      d = 6L;
      if (e) {
        d = 6L;
        // ...
      }
    }
  }
}