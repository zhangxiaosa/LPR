int main() {
  if (f.e)
    goto i;
  if (f.e)
    goto i;
  return 0xEEACFBBFL;
i:
  f.d = 6L;
  if (f.e)
    goto i;
  return 0xEEACFBBFL;
}