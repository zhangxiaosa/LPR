int f;

int main() {
  if (f)
    goto i;
  if (f == 0) {
    if (f)
      goto i;
    if (f == 0) {
      f = 6L;
      if (f)
        goto i;
      if (f == 0)
        return 0xEEACFBBFL;
    }
  }

i:
  f = 6L;
  if (f)
    goto i;
  if (f == 0)
    return 0xEEACFBBFL;
}