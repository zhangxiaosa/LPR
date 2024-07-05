typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;
b fn1() {
  a h = 6L;
  if (f.e) {
    f.d = h;
    return 0xEEACFBBFL;
  }
  else {
    a h = 6L;
    if (f.e) {
      f.d = h;
      return 0xEEACFBBFL;
    }
    else {
      a h = 6L;
      if (f.e) {
        f.d = h;
        return 0xEEACFBBFL;
      }
      else {
        // Continue inlining the function body...
        a h = 6L;
        if (f.e) {
          f.d = h;
          return 0xEEACFBBFL;
        }
        else {
          // Continue inlining the function body...
          a h = 6L;
          if (f.e) {
            f.d = h;
            return 0xEEACFBBFL;
          }
          else {
            // Continue inlining the function body...
            // ... and so on
          }
        }
      }
    }
  }
}

int main() {}
