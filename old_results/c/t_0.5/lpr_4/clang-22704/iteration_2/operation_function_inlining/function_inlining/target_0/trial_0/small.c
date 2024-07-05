int f_d;
int f_e;

int main() {
  if (f_e) {
    f_d = 6L;
    if (f_e) {
      f_d = 6L;
      // Inline the recursive call
      if (f_e) {
        f_d = 6L;
        // Inline the recursive call
        return 0xEEACFBBFL;
      }
      return 0xEEACFBBFL;
    }
    return 0xEEACFBBFL;
  }
  // Inline the recursive call
  return 0xEEACFBBFL;
}