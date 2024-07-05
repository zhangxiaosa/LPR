c
d fn1() {
  long c = 0;
  d f = {c};
  memcpy(f, &c, sizeof(long));
  return f;
}
