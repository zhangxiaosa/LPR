char fn1() {
  if (f)
    goto i;
  if (f)
    goto i;
  char j;
  return j;
i:
  f = 6L;
  if (f)
    goto i;
  j = 0xEEACFBBFL;
  return j;
}