typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
int main() {
  a h = 6L;

  if (f.e) {
    f.d = h;
    h = 6L;

    if (f.e) {
      f.d = h;
      h = 6L;

      // Continue inlining recursively...
      // Ensure the inlining doesn't result in an infinite loop
      // Replace all function calls to fn1() with the inlined code
    }

    b j = 0xEEACFBBFL;
    // Return value j
  }

  // Continue with the rest of the program...
}