int f;

int main() {
  if (f) {
    goto i;
  }
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