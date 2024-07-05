int f;
int main() {
  if (f) {
    if (f) {
      goto i;
    }
    f = 6L;
    if (f) {
      goto i;
    }
  }
  f = 6L;
  if (f) {
    goto i;
  }
  return 0xEEACFBBFL;
i:
  f = 6L;
  if (f) {
    goto i;
  }
  return 0xEEACFBBFL;
}