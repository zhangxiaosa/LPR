int f;

int main() {
  if (f) {
    f = 6L;
    if (f) {
      f = 6L;
      main();
      return 0xEEACFBBFL;
    } else {
      main();
      return 0xEEACFBBFL;
    }
  } else {
    main();
    return 0xEEACFBBFL;
  }
}