
long fn1() {
  if (d)
    goto i;
  return 6L;
i:
  d = 6L;
  return 0xEEACFBBFL;
}
int main() {}
