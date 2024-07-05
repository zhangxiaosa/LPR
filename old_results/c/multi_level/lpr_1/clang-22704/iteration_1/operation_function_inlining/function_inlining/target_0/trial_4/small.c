int f;
int main() {
  if (f) {
    f = 6;
    // code from fn1()
    // ...
    // Replace the innermost call to fn1:
    if (f) {
      f = 6;
      // code from fn1()
    }
    int j = 0xEEACFBBF;
    return j;
  }
  // ...
  f = 6;
  // Replace the call to fn1:
  if (f) {
    f = 6;
    // code from fn1()
    // ...
    // Replace the innermost call to fn1:
    if (f) {
      f = 6;
      // code from fn1()
    }
    int j = 0xEEACFBBF;
    return j;
  }
  int j;
  return j;
}