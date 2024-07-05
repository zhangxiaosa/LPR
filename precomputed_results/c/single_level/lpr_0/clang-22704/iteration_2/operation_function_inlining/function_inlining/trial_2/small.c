int d;
int e;
int main() {
  if (e) {
    d = 6L;
    if (e) {
      d = 6L;
      if (e) {
        d = 6L;
        if (e) {
          d = 6L;
          // ... Recursive calls continue
          return 0xEEACFBBFL;
        }
        else {
          // ... Recursive calls continue
          return 0xEEACFBBFL;
        }
      }
      else {
        // ... Recursive calls continue
        return 0xEEACFBBFL;
      }
    }
    else {
      // ... Recursive calls continue
      return 0xEEACFBBFL;
    }
  }
  else {
    if (e) {
      d = 6L;
      if (e) {
        d = 6L;
        if (e) {
          d = 6L;
          // ... Recursive calls continue
          return 0xEEACFBBFL;
        }
        else {
          // ... Recursive calls continue
          return 0xEEACFBBFL;
        }
      }
      else {
        // ... Recursive calls continue
        return 0xEEACFBBFL;
      }
    }
    else {
      // ... Recursive calls continue
      return 0xEEACFBBFL;
    }
  }
}