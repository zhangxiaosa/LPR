int f;

int main() {
  if (f) {
    f = 6L;
    main();
    return 0xEEACFBBFL;
  }
  main();
  return 0xEEACFBBFL;
}