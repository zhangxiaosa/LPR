struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  if (f.e) {
    if (f.e) {
      f.d = 6L;
      if (f.e) {
        /* The function call is inlined again. */
        if (f.e) {
          f.d = 6L;
          if (f.e) {
            f.d = 6L;
            if (f.e) {
              f.d = 6L;
              if (f.e) {
                f.d = 6L;
                /* Continue inlining recursively. */
                fn1();
                return 0xEEACFBBFL;
              }
              return 0xEEACFBBFL;
            }
            return 0xEEACFBBFL;
          }
          return 0xEEACFBBFL;
        }
        return 0xEEACFBBFL;
      }
      return 0xEEACFBBFL;
    }
    return 0xEEACFBBFL;
  }
  return 0xEEACFBBFL;
}