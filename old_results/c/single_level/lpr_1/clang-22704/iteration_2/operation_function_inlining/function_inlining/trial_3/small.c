int d;
int e;

int main() {
  if (e)
    goto i;
  // Original code of fn1
  if (e)
    goto i;
  // Original code of fn1
  return 0xEEACFBBFL;
i:
  d = 6L;
  // Original code of fn1
  if (e)
    goto i;
  // Original code of fn1
  return 0xEEACFBBFL;
}