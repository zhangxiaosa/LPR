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
    a h_1 = 6L;
    if (f.e) {
      a h_2 = 6L;
      if (f.e) {
        a h_3 = 6L;
        if (f.e) {
          // Continue inlining recursively if necessary
        } else {
          f.d = h_3;
          // Continue inlining recursively if necessary
          b j_3 = 0xEEACFBBFL;
          return j_3;
        }
      } else {
        f.d = h_2;
        // Continue inlining recursively if necessary
        b j_2 = 0xEEACFBBFL;
        return j_2;
      }
    } else {
      f.d = h_1;
      // Continue inlining recursively if necessary
      b j_1 = 0xEEACFBBFL;
      return j_1;
    }
  } else {
    f.d = h;
    // Continue inlining recursively if necessary
    b j = 0xEEACFBBFL;
    return j;
  }
}

int main() {}
