int f;

int main() {
  if (f) {
    f = 6L;
    if (f) {
      f = 6L;
      if (f) {
        f = 6L;
        goto i;
      } else {
        return 0xEEACFBBFL;
      }
    } else {
      return 0xEEACFBBFL;
    }
  } else {
    return 0xEEACFBBFL;
  }

i:
  f = 6L;
  if (f) {
    f = 6L;
    if (f) {
      f = 6L;
      goto i;
    } else {
      return 0xEEACFBBFL;
    }
  } else {
    return 0xEEACFBBFL;
  }
}