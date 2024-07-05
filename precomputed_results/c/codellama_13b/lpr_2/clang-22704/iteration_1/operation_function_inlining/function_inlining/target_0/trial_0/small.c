
long fn1(int d) {
  if (d)
    goto i;
  long j;
  return j;
i:
  d = 6L;
  long j;
  return 0xEEACFBBFL;
}
int main() {}
